#ifndef MainCharacter_hpp
#define MainCharacter_hpp

#include <SFML/Graphics.hpp>

class MainCharacter
{
private:
	sf::Texture mainChT;
	sf::Sprite mainChS;
public:
	MainCharacter();
	void move(sf::Event &event);
	void draw(sf::RenderWindow &window);

};

#endif