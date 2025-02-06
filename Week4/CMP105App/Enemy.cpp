#include "Enemy.h"

Enemy::Enemy()
{
	Enemytexture.loadFromFile("gfx/Mushroom.png");

	setTexture(&Enemytexture);
	setSize(sf::Vector2f(100, 100));
	setPosition(100,100);


}

Enemy::Enemy(float in,float in1)
{
	Enemytexture.loadFromFile("gfx/Mushroom.png");

	setTexture(&Enemytexture);
	setSize(sf::Vector2f(100, 100));
	setPosition(in, in1);
}



void Enemy::setEnemySprite(GameObject in)
{
	EnemySprite = in;

}

void Enemy::setEnemyTextrue(sf::Texture in)
{
	Enemytexture = in;

}

void Enemy::setPos(float in)
{
	posIn = in;
}

GameObject Enemy::getEnemySprite()
{
	return GameObject(EnemySprite);
}

void Enemy::WindowIn(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;


}



void Enemy::update(float dt)
{
	sf::Vector2u pos = window->getSize();
	sf::Vector2f Location = getPosition();


	move((speed * dt), (speedy * dt));

	if (input->isPressed(sf::Keyboard::M)) {
		speed = speed * 1.1;
		speedy = speedy * 1.1;
		


	}

	if (Location.x + 100 > pos.x) {

		speed = -(speed);
		setPosition(pos.x - 100, Location.y);

	}
	if (Location.x < 0) {
		speed = -(speed);
		setPosition(0, Location.y);
	}
	if (Location.y + 100 > pos.y) {

		speedy = -(speedy);
		setPosition(Location.x, pos.y - 100);

	}
	if (Location.y < 0) {
		speedy = -(speedy);
		setPosition(Location.x, 0);
	}




}
