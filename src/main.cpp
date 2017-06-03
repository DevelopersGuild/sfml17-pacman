/*
Developers' Guild - C++ SFML Spring 2017 Group
Clone of a Pacman Game
Developers: Andrew Lei, Ashley Cline, Lai Vang Lee, Quentin Monasterial, Tyler Matsunami, Ye Eun Myung
*/

#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <ctime>
#include "ResourcePath.h"
#include "Overlap.h"
#include "MainCharacter.h"


int main()
{
	sf::RenderWindow window(sf::VideoMode(700.0, 800.0), "SFML Works!");
     //window.setVerticalSyncEnabled(true); //Mac framerate is very fast
     window.setFramerateLimit(60);

    MainCharacter pacman;

     //main game loop
     while (window.isOpen())
	{
		sf::Event event;
          //event loop
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
        pacman.move(event);
        
          //make sure that you follow this order!
		window.clear();
        pacman.draw(window);
          window.display();
	}

	return 0;
}
