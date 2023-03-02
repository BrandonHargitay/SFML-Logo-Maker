
//
// Created by Brandon Hargitay on 2/27/23.
//

#ifndef TEXT_textInput_TYPING_H
#define TEXT_textInput_TYPING_H
#include "Letter.h"
#include "Font.h"
#include <list>

class Typing : public sf::Drawable, public sf::Transformable {
public:
    Typing();
    void addEventHandler(sf::RenderWindow& window, const sf::Event &event);
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    void setCharacterPosition();
private:
    Letter letter;
    //LinkedList<Letter> textInput;
    std::list<Letter> textInput;
    sf::Vector2f starting_point;
    int count = 0;
};


#endif //TEXT_textInput_TYPING_H

//git remote add origin git@github.com:BrandonHargitay/ask-pdf.git
//869  git add -A && git commit -m "Initialize" && git push -u origin master
//870  git status