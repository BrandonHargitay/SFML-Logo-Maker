//
// Created by Brandon Hargitay on 3/16/23.
//

#ifndef TEXT_INPUT_BLINKINGCURSOR_H
#define TEXT_INPUT_BLINKINGCURSOR_H
#include "Helper/states.h"
#include "Font.h"
class BlinkingCursor : public states, public sf::Text {
public:
    BlinkingCursor();
    void update();
private:
    sf::Clock clock;
};


#endif //TEXT_INPUT_BLINKINGCURSOR_H
