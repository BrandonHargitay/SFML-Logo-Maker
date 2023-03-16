//
// Created by Brandon Hargitay on 3/16/23.
//

#include "MouseEvents.h"

template<class T>
bool MouseEvents::isHover(const T &Obj, const sf::RenderWindow &window) {
    sf::Vector2f mpos = (sf::Vector2f)sf::Mouse::getPosition(window);
    return Obj.getGlobalBounds().contains(mpos);
}

template<class T>
bool MouseEvents::isClick(const T &Obj, const sf::RenderWindow &window) {
    return isHover(Obj, window) && sf::Mouse::isButtonPressed(sf::Mouse::Left);
}