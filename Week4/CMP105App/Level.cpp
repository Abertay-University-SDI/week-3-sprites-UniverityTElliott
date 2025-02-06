#include "Level.h"
#include "Player.h"
#include "Background.h"
Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;
	
	// initialise game objects
	
	player.setInput(input);
	

	
	
	enemy.WindowIn(window, input);
	enemy1.WindowIn(window, input);

	
	view = window->getView();
	//view.setSize(300,300);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	player.handleInput(dt);


	if (input->isKeyDown(sf::Keyboard::Up))
	{
		view.move(0, -100*dt);
	}
	else if (input->isKeyDown(sf::Keyboard::Down))
	{
		view.move(0, 100 * dt);
	}
	else
	{
		view.move(0, 0);
	}

	if (input->isKeyDown(sf::Keyboard::Left))
	{
		view.move(-100 * dt, 0);
	}
	else if (input->isKeyDown(sf::Keyboard::Right))
	{
		view.move(100 * dt,0);
	}
	else
	{
		view.move(0, 0);
	}


}

// Update game objects
void Level::update(float dt)
{

	player.update(dt);
	enemy.update(dt);
	enemy1.update(dt);
	window->setView(view);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(background);
	window->draw(player);
	window->draw(enemy);
	window->draw(enemy1);
	
	

	endDraw();
}
