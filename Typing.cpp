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
//    setPosition({0, 0.f});
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
}
void Typing::setCharacterPosition() {
    if (textInput.size() == 1) {
        textInput.back().setPosition(getPosition());
        sf::Text lastText = textInput.back();
        std::cout << "TEXT:" << std::endl;
        std::cout << "X: " << lastText.getPosition().x << " Y: " << lastText.getPosition().y << std::endl;
    }
    else {
        float xpos = std::prev(textInput.end(), 2)->getPosition().x
                         + std::prev(textInput.end(), 2)->getGlobalBounds().width
                         + std::prev(textInput.end(), 2)->getLetterSpacing();
        textInput.back().setPosition(xpos, getPosition().y );
        std::cout << "TEXT:" << std::endl;
        sf::Text lastText = textInput.back();
        std::cout << "X: " << lastText.getPosition().x << " Y: " << lastText.getPosition().y << std::endl;


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







