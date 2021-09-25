#include "grid.hpp"

grid::grid() {
	this->columns = 20;
	this->rows = 20; 
	square.setSize(sf::Vector2f(30,30));
	square.setOrigin(sf::Vector2f());
	square.setFillColor(sf::Color::White);
	square.setOutlineColor(sf::Color::Black);
	square.setOutlineThickness(2);
}

void grid::draw_grid(sf::RenderWindow &window) {
	for (size_t i = 0; i < columns; i++) {
	    for (size_t j = 0; j < rows; j++) {
		    square.setPosition(sf::Vector2f(i * 30, j * 30));	
			window.draw(square);
		}
	}
}