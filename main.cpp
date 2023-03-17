#include <SFML/Graphics.hpp>
#include "TextInput.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(1800, 800), "SFML works!");
    TextInput type;
    TextInput type2;

    type.setPosition(400,100);
    type2.setPosition(400,600);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                window.close();
            }
            type2.addEventHandler(window, event);
            type.addEventHandler(window, event);
        }
//        type.update();
//        type2.update();
        window.clear();
        window.draw(type);
        window.draw(type2);
        window.display();
    }

    return 0;
}