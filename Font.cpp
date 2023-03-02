//
// Created by Brandon Hargitay on 2/14/23.
//

#include "Font.h"

sf::Font Font::font;

sf::Font &Font::getFont() {
    loadFont();
    return font;
}

void Font::loadFont() {
    font.loadFromFile("Font/atwriter.ttf");
}
