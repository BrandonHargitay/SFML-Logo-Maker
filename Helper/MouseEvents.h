//
// Created by Brandon Hargitay on 3/16/23.
//

#ifndef TEXT_INPUT_MOUSEEVENTS_H
#define TEXT_INPUT_MOUSEEVENTS_H

#include <SFML/Graphics.hpp>

class MouseEvents {
public:
    template<class T>
    static bool isHover(const T& Obj , const sf::RenderWindow& window);

    template<class T>
    static bool isClick(const T& Obj , const sf::RenderWindow& window);

};

#include "MouseEvents.cpp"


#endif //TEXT_INPUT_MOUSEEVENTS_H
