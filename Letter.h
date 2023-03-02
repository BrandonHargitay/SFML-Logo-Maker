//
// Created by Brandon Hargitay on 2/27/23.
//

#ifndef TEXT_textInput_LETTER_H
#define TEXT_textInput_LETTER_H
#include <SFML/Graphics.hpp>
#include <iostream>
class Letter : public sf::Text {
public:
    Letter();
    Letter(char aChar);
    friend bool operator == (const Letter& _char1, const Letter& _char2);
    friend std::ostream& operator << (std::ostream& outs, const Letter& _char);
};


#endif //TEXT_textInput_LETTER_H
