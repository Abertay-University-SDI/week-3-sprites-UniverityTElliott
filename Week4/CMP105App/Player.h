#pragma once
#include "Framework/GameObject.h"
class Player :
    public GameObject
{
public:
	Player();
    void handleInput(float dt) override;

	void update(float dt);
    
	void setPlayerSprite(GameObject in);
	void setPlayerTextrue(sf::Texture in);
	GameObject getPlayerSprite();
private:

    GameObject PlayerSprite;
    sf::Texture Playertexture;

	sf::Vector2f direction = sf::Vector2f(0, 0);
	sf::Vector2f playerSize = sf::Vector2f(100, 100);


	//"float speed = 50" initialises 50 as a float
	//Come get me Tom.
	float speed = 600;



};

