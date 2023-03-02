#include <SFML/Graphics.hpp>
#include "Typing.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 600), "SFML works!");
    sf::CircleShape shape(100.f);
    Typing type;
    std::cout << type.getPosition().x << " " << type.getPosition().y;

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

        window.clear();
        window.draw(type);
        window.display();
    }

    return 0;
}