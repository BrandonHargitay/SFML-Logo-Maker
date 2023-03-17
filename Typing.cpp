//
// Created by Brandon Hargitay on 2/27/23.
//

#include "Typing.h"

void Typing::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();
    for(auto& letter : textInput){
        target.draw(letter,states);
    }
}

Typing::Typing() {
    letter.setFont(Font::getFont());
    letter.setFillColor(sf::Color::White);
    letter.setCharacterSize(40);
}

void Typing::addEventHandler(sf::RenderWindow &window, const sf::Event &event) {

    if (event.type == sf::Event::TextEntered) {
        if (event.text.unicode >= 32 && event.text.unicode <= 126) {
            letter.setString(static_cast<char>(event.text.unicode));
            textInput.push_back(letter);
            setCharacterPosition();
        }
        else if (event.text.unicode == 8) {
            if (!textInput.empty()) {
                textInput.pop_back();
            }
        }
    }
    colorMatchingWords();
}
void Typing::setCharacterPosition() {
    if (textInput.size() == 1) {
        textInput.back().setPosition(getPosition());
    }
    else {
        float xpos = std::prev(textInput.end(), 2)->getPosition().x
                         + std::prev(textInput.end(), 2)->getGlobalBounds().width
                         + std::prev(textInput.end(), 2)->getLetterSpacing();
        textInput.back().setPosition(xpos, getPosition().y );
    }
}

float Typing::getLastX() {
    if (!textInput.empty()) {
        sf::Text lastText = textInput.back();
        return lastText.getPosition().x + lastText.getGlobalBounds().width + lastText.getLetterSpacing();
    }
}

float Typing::getY() {
    return getPosition().y;
}

void Typing::findAndColorWord(const std::string& word, const sf::Color& color) {
    std::string currentWord;
    int wordLength = word.length();

    for (auto it = textInput.begin(); it != textInput.end(); ++it) {
        currentWord.push_back(it->getString()[0]);

        if (currentWord.size() >= wordLength) {
            if (currentWord.substr(currentWord.size() - wordLength, wordLength) == word) {
                for (int i = 0; i < wordLength; ++i) {
                    std::prev(it, wordLength - i - 1)->setFillColor(color);
                }
            }
        }
    }
}

void Typing::colorMatchingWords() {
    findAndColorWord("int", sf::Color::Blue);
    findAndColorWord("float", sf::Color::Red);
    findAndColorWord("char", sf::Color::Yellow);
    findAndColorWord("double", sf::Color::Green);
}






