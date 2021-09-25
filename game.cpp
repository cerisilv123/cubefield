#include "game.hpp"
#include "grid.hpp"
#include <SFML/Graphics.hpp>

game::game() {
	this->active = false; 
}

void game::play_game() {
	sf::RenderWindow window(sf::VideoMode(600, 600), "Cube Field");
	
	grid Grid;
   
    while (window.isOpen())
    {
        sf::Event event;
       
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
		
		Grid.draw_grid(window);
       
        window.display();
    }
}