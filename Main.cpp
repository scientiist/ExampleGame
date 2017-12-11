#include <iostream>
#include <SFML/Graphics.hpp>
#include "UIContainer.h"
#include "Frame.h"

int main() {
	

	UIContainer mainmenu;
		mainmenu.SetColor(sf::Color(40, 100, 200));
		
	Frame bruh;

	int num = 0;

	bruh.SetParent(&mainmenu);

	std::cout << bruh.GetParent() << std::endl;;


#pragma region Setup
	sf::RenderWindow window(sf::VideoMode(900, 506), "Game Thing Idk", sf::Style::Default);

	window.setFramerateLimit(60);
#pragma endregion


	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		// game loop code goes here I guess
		
		mainmenu.Update();

		num++;
		bruh.SetPosition(sf::Vector2f(num, 30));

		// end
		window.clear();
		mainmenu.Render(window);
		window.display();
	}
	return 0;
}