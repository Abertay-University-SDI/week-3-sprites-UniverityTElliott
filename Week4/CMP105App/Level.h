#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>

#include "Player.h"
#include "Enemy.h"
#include "Background.h"
using namespace sf;


class Level : BaseLevel {
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render() override;


private:
	// Level objects
	

	View view;// View(Vector2f(300, 300), Vector2f(600, 600));
	Player player;
	Background background;
	Enemy enemy = Enemy();
	Enemy enemy1 = Enemy(160,540);

};