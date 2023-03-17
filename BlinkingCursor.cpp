//
// Created by Brandon Hargitay on 3/16/23.
//

#include <iostream>
#include "BlinkingCursor.h"

BlinkingCursor::BlinkingCursor() {
    text.setFont(Font::getFont());
    text.setFillColor(sf::Color::White);
    text.setCharacterSize(40);
}

void BlinkingCursor::update() {
    if(!checkState(HIDDEN)){
        if(clock.getElapsedTime().asMilliseconds() > 500) {
            text.setString(' ');
        }
        if(clock.getElapsedTime().asMilliseconds() > 1000) {
            text.setString(':');
            clock.restart();
        }
    }
}


void BlinkingCursor::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if(!checkState(HIDDEN))
        target.draw(text);
}

void BlinkingCursor::setPosition(float x, float y) {
    text.setPosition(x,y);
}

sf::Vector2f BlinkingCursor::getPosition() {
    return text.getPosition();
}


