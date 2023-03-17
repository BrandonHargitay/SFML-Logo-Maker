//
// Created by Brandon Hargitay on 3/16/23.
//

#include "TextInput.h"

TextInput::TextInput() {
    setState(ACTIVE, false);
}

void TextInput::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    states.transform *= getTransform();
    window.draw(box, states);
    window.draw(typing, states);
    window.draw(cursor, states);
}

void TextInput::update() {
    if(checkState(ACTIVE)){
        cursor.setPosition(typing.getLastX(),typing.getY());
        cursor.update(); // makes the cursor blink
    }


}

void TextInput::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    if(MouseEvents::isClick(box, window)){
        enableState(ACTIVE);

        std::cout << "CLICKED ";
    }else if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left){
        std::cout << "WINDOW CLICKED ";
        disableState(ACTIVE);
    }
    if(checkState(ACTIVE)){
        typing.addEventHandler(window, event);
        update();
    }
}

void TextInput::setPosition(float x, float y) {
    Transformable::setPosition(x, y);
    box.setPosition(x,y);
}

sf::FloatRect TextInput::getGlobalBounds() const {
    return box.getGlobalBounds();
}


