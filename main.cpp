#include <SFML/Graphics.hpp>
#include "TextInput.h"
#include "TextBox.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(1800, 800), "SFML works!");
    TextInput type;


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                window.close();
            }
        type.addEventHandler(window, event);
        }
        type.update();
        window.clear();
        window.draw(type);
        window.display();
    }

    return 0;
}