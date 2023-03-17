//
// Created by Brandon Hargitay on 3/16/23.
//

#ifndef TEXT_INPUT_TEXTBOX_H
#define TEXT_INPUT_TEXTBOX_H
#include "SFML/Graphics.hpp"
#include "Helper/states.h"

class TextBox :  public sf::Drawable, public states{
public:
    TextBox();
    void setPosition(float x,  float y);
    void getPosition();
    sf::FloatRect getGlobalBounds() const;
private:
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    sf::RectangleShape box;
};




#endif //TEXT_INPUT_TEXTBOX_H
