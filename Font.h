//
// Created by Brandon Hargitay on 2/14/23.
//

#ifndef CALCULATOR_FONT_H
#define CALCULATOR_FONT_H
#include  <SFML/Graphics.hpp>

class Font {
private:
    static sf::Font font;
    static void loadFont();
public:
    static sf::Font& getFont();

};



#endif //CALCULATOR_FONT_H
