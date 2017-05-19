/*
Developers' Guild - C++ SFML Spring 2017 Group

*/

#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <ctime>
#include "ResourcePath.h"
#include "Overlap.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(700.0, 800.0), "SFML Works!");
     //window.setVerticalSyncEnabled(true); //Mac framerate is very fast
     window.setFramerateLimit(60);


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

          //make sure that you follow this order!
		window.clear();

          window.display();
	}

	return 0;
}
