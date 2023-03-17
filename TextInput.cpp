//
// Created by Brandon Hargitay on 3/16/23.
//

#include "TextInput.h"

TextInput::TextInput() {
    Transformable::setPosition(500, 100);
    setState(HIDDEN, false);
}

void TextInput::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    states.transform *= getTransform();
    window.draw(box, states);
    window.draw(typing, states);
    window.draw(cursor, states);

}

void TextInput::update() {
    cursor.setPosition(typing.getLastX(),typing.getY());
    cursor.update();

}

void TextInput::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    typing.addEventHandler(window, event);
    update();
}


