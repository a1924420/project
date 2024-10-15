#include <iostream>
#include <string>
#include "Player.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "EndScene.h"
#include <SFML/System/Clock.hpp>

using namespace std;

void EndScene::goodEnding(){
    cout << "After a long day of distributing medicine to the people... you go home! \n" 
    << "You're a real pharmacist! \n";
}

void EndScene::badEnding(){
    cout << "The night is impossibly dark. You wander from alleyway to alleyway, searching for your car.\n";
    cin.get();
    cout << "Where is it? You wonder.\n";
    cin.get();
    cout << "Your stomach hurts from the copious amounts of Panadol™ you've been taking all day.\n";
    cin.get();
    cout << "If only your mother-- hey, what was that? Did you see that?\n" << endl;
    
     // Get the desktop mode to find the screen dimensions
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();

    // Define the window size
     int windowWidth = 800;
     int windowHeight = 600;

    // Calculate the position to center the window
    int posX = (desktop.width - windowWidth) / 2;
    int posY = (desktop.height - windowHeight) / 2;

    // Create the window and position it at (posX, posY)
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Snoop entering!");
    window.setPosition(sf::Vector2i(posX, posY));  // Center the window

    // Load the texture
    sf::Texture texture;
    if (!texture.loadFromFile("./police officer.png")) {  // Ensure the correct path and extension are used
        std::cout << "Error loading image" << std::endl;
    }

    // Create sprite with loaded texture
    sf::Sprite sprite(texture);

    // Center the sprite inside the window
    sf::Vector2u textureSize = texture.getSize();  // Texture size
    float spritePosX = (windowWidth - textureSize.x) / 2.0f;
    float spritePosY = (windowHeight - textureSize.y) / 2.0f;
    sprite.setPosition(spritePosX, spritePosY);

    // Create a clock to measure the time
    sf::Clock clock;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                exit(EXIT_SUCCESS);
            }
        }

        // Check if 5 seconds have passed
        if (clock.getElapsedTime().asSeconds() >= 5) {
            window.close();  // Close the window after 5 seconds
            exit(EXIT_SUCCESS);  // Exit the program if needed
        }

        // Clear the window, draw the sprite, and display the contents
        window.clear();
        window.draw(sprite);
        window.display();
    }

    cout << "'Hey, freeze! It's the police!' \n";
    cin.get();
    cout << "Wait, what? \n";
    cin.get();
    cout << "'We received a tip... but that'll just be the tip of the ice-berg when you're in court!' \n" << endl;
}
