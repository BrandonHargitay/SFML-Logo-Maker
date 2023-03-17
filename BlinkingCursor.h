//
// Created by Brandon Hargitay on 3/16/23.
//

#ifndef TEXT_INPUT_BLINKINGCURSOR_H
#define TEXT_INPUT_BLINKINGCURSOR_H
#include "Helper/states.h"
#include "Font.h"
class BlinkingCursor : public sf::Drawable, public states, public sf::Transformable {
public:
    BlinkingCursor();
    void update();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    void setPosition(float x,  float y);
private:
    sf::Clock clock;
    sf::Text text;
};


#endif //TEXT_INPUT_BLINKINGCURSOR_H
