#include "Player.h"

Player::Player()
{
	Playertexture.loadFromFile("gfx/Goomba.png");
	 
	setTexture(&Playertexture);
	setSize(sf::Vector2f(100, 100));
	setPosition(100, 100);
}

void Player::handleInput(float dt)
{
	//If W & D are pressed then the Vector would be (1, -1), this will make the player North-East.
	if (input->isKeyDown(sf::Keyboard::W))
	{
		direction.y = -1;
	}
	else if (input->isKeyDown(sf::Keyboard::S))
	{
		direction.y = 1;
	}
	else
	{
		direction.y = 0;
	}

	if (input->isKeyDown(sf::Keyboard::A))
	{
		direction.x = -1;
	}
	else if (input->isKeyDown(sf::Keyboard::D))
	{
		direction.x = 1;
	}
	else
	{
		direction.x = 0;
	}
}

void Player::update(float dt)
{
	
	//std::cout << std::endl << direction.x << " " << direction.y;
	//Moves the playerRect by the speed of the direction, factoring in the delta time.
	move(direction.x * speed * dt, direction.y * speed * dt);
	
}

void Player::setPlayerSprite(GameObject in)
{

	PlayerSprite = in;
}

void Player::setPlayerTextrue(sf::Texture in)
{

	Playertexture = in;

}

GameObject Player::getPlayerSprite()
{
	return GameObject(PlayerSprite);
}



