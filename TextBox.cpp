//
// Created by Brandon Hargitay on 3/16/23.
//

#include "TextBox.h"

TextBox::TextBox(){
    box.setOutlineColor(sf::Color::White);
    box.setFillColor({55,55,55});
    box.setOutlineThickness(2.f);
    box.setSize({400.0f,50.0f});
}

void TextBox::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(box);
}

void TextBox::setPosition(float x, float y) {
    box.setPosition(x,y);
}

sf::FloatRect TextBox::getGlobalBounds() const{
    return box.getGlobalBounds();
}



