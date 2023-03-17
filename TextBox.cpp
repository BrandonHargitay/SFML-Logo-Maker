//
// Created by Brandon Hargitay on 3/16/23.
//

#include "TextBox.h"

TextBox::TextBox(){
    box.setOutlineColor(sf::Color::White);
    box.setFillColor({55,55,55});
    box.setOutlineThickness(2.f);
    box.setSize({900.0f,50.0f});
//  box.setPosition({10.0f,110.0f})
}

void TextBox::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();
    target.draw(box, states);
}

void TextBox::setPosition(float x, float y) {
    box.setPosition(x,y);
}


