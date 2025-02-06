#pragma once

#include "Framework/GameObject.h"


class Background :
	public GameObject
{
public:
	Background();

private:
	GameObject BGSprite;
	sf::Texture BGtexture;


};

