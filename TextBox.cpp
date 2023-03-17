//
// Created by Brandon Hargitay on 3/16/23.
//

#include "TextBox.h"

TextBox::TextBox(){
    box.setOutlineColor(sf::Color::White);
    box.setFillColor({55,55,55});
    box.setOutlineThickness(2.f);
    box.setSize({400.0f,50.0f});
    label.setFont(Font::getFont());
    label.setFillColor(sf::Color::White);

    label.setCharacterSize(30);
    label.setFillColor(sf::Color(255,255,255,75));
}

void TextBox::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(box);
    target.draw(label);
}

void TextBox::setPosition(float x, float y) {
    box.setPosition(x,y);
    label.setPosition(x,y);
}

sf::FloatRect TextBox::getGlobalBounds() const{
    return box.getGlobalBounds();
}

void TextBox::centerText() {
    Position::centerText(box,label);

}

void TextBox::setString(const std::string str) {
    label.setString(str);
}



