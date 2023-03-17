
//
// Created by Brandon Hargitay on 2/27/23.
//

#ifndef TEXT_textInput_TYPING_H
#define TEXT_textInput_TYPING_H
#include "Letter.h"
#include "Font.h"
#include "Helper/states.h"
#include <list>
#include "BlinkingCursor.h"


class Typing : public sf::Drawable, public sf::Transformable, public states {
public:
    Typing();
    void addEventHandler(sf::RenderWindow& window, const sf::Event &event);
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    float getLastX();
    float getY();
    void setCharacterPosition();
private:
    void findAndColorWord(const std::string& word, const sf::Color& color);
    void colorMatchingWords();

    Letter letter;
    std::list<Letter> textInput;
    states state;
    BlinkingCursor cursor;
};


#endif //TEXT_textInput_TYPING_H
