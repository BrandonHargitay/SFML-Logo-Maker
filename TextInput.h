//
// Created by Brandon Hargitay on 3/16/23.
//

#ifndef TEXT_INPUT_TEXTINPUT_H
#define TEXT_INPUT_TEXTINPUT_H
#include "Typing.h"
#include "BlinkingCursor.h"
#include "Helper/MouseEvents.h"
#include "TextBox.h"
class TextInput : public sf::Drawable, public sf::Transformable, public states{
public:
    TextInput();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void update();
    void addEventHandler(sf::RenderWindow& window, sf::Event event);
    void setPosition(float x, float y);
private:
    Typing typing;
    BlinkingCursor cursor;
    TextBox box;
};


#endif //TEXT_INPUT_TEXTINPUT_H
