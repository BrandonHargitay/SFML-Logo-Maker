//
// Created by Brandon Hargitay on 3/16/23.
//

#include "BlinkingCursor.h"

BlinkingCursor::BlinkingCursor() {
    setFont(Font::getFont());
    setFillColor(sf::Color::White);
    setCharacterSize(40);
}

void BlinkingCursor::update() {
    if(!checkState(HIDDEN)){
        if(clock.getElapsedTime().asMilliseconds() > 500) {
            setString(' ');
        }
        if(clock.getElapsedTime().asMilliseconds() > 1000) {
            setString('|');
            clock.restart();
        }
    }
}


