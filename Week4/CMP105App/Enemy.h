#pragma once
#include "Framework/GameObject.h"
class Enemy :
    public GameObject
{
public:
	Enemy();
	Enemy(float in,float in1);

	void update(float dt);

	void setEnemySprite(GameObject in);
	void setEnemyTextrue(sf::Texture in);

	void setPos(float in);
	GameObject getEnemySprite();


	void WindowIn(sf::RenderWindow* hwnd, Input* in);

private:

	GameObject EnemySprite;
	sf::Texture Enemytexture;
	float posIn;
	sf::Vector2f direction = sf::Vector2f(0, 0);
	sf::Vector2f EnemySize = sf::Vector2f(100, 100);


	//"float speed = 50" initialises 50 as a float
	//Come get me Tom.
	float speed = 500.f;
	float speedy = 500.f;





};

