//
// Created by Brandon Hargitay on 3/16/23.
//

#include "TextInput.h"

TextInput::TextInput() {
    setPosition(0,0);
    setState(HIDDEN, false);
}

void TextInput::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(typing);
    window.draw(cursor);
}

void TextInput::update() {
    cursor.setPosition(typing.getLastX(),typing.getY());
    cursor.update();
}

void TextInput::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    typing.addEventHandler(window, event);
    update();
}
