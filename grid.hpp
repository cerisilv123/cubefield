#ifndef grid_hpp
#define grid_hpp

#include <SFML/Graphics.hpp>

class grid {
private: 
	int columns;
	int rows; 
	sf::RectangleShape square;
public: 
    grid();
	void draw_grid(sf::RenderWindow &window);
};

#endif