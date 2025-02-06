#include "Background.h"


Background::Background(){

	BGtexture.loadFromFile("gfx/Level.png");

	setTexture(&BGtexture);
	setSize(sf::Vector2f(11038,675));
	setPosition(0, 0);

}