#include "MainCharacter.h"
#include "ResourcePath.h"

MainCharacter::MainCharacter()
{
	mainChT.loadFromFile(resourcePath() + "assets//spritesheet.png");
	mainChS.setTexture(mainChT);
	mainChS.setScale(5.0, 5.0);
	mainChS.setTextureRect(sf::IntRect(0, 0, 20, 20));
}
void MainCharacter::move(sf::Event &event)
{
	if (event.key.code == sf::Keyboard::Left)
	{
		mainChS.setTextureRect(sf::IntRect(0, 0, 20, 20));
		mainChS.move(-2.0, 0.0);
	}
	if (event.key.code == sf::Keyboard::Right)
	{
		mainChS.setTextureRect(sf::IntRect(0, 20, 20, 20));
		mainChS.move(2.0, 0.0);
	}	
	if (event.key.code == sf::Keyboard::Up)
	{
		mainChS.setTextureRect(sf::IntRect(0, 40, 20, 20));
		mainChS.move(0.0, -2.0);
	}	
	if (event.key.code == sf::Keyboard::Down)
	{
		mainChS.setTextureRect(sf::IntRect(0, 60, 20, 20));
		mainChS.move(0.0, 2.0);
	}
}
void MainCharacter::draw(sf::RenderWindow &window)
{
	window.draw(mainChS);
}