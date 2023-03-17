//
// Created by Brandon Hargitay on 3/17/23.
//

#ifndef TEXT_INPUT_POSITION_H
#define TEXT_INPUT_POSITION_H
#include <SFML/Graphics.hpp>
#include <SFML/Graphics.hpp>
#include <cmath>

class Position {
public:
    template<class T, class S>
    static void left(const T& obj1, S& obj2, float spacing = 0);

    template<class T, class S>
    static void right(const T& obj1, S& obj2, float spacing = 0);

    template<class T, class S>
    static void center(const T& obj1, S& obj2, float spacing = 0);

    template<class T, class S>
    static void bottom(const T& obj1, S& obj2, float spacing = 0);

    template<class T>
    static void centerText(const T &obj, sf::Text &text);

};

#include "Position.cpp"


#endif //TEXT_INPUT_POSITION_H
