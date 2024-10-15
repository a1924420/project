// #include <iostream>
// #include <string>
// #include "Person.h"
// #include "Customer.h"
// #include "Police.h"
// #include <SFML/Graphics.hpp> // Include SFML graphics
// #include <SFML/Audio.hpp>


#include <SFML/System/Clock.hpp> 
#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp> // For sf::Clock
#include <iostream>
using namespace std;
#include <SFML/System/Clock.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
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
    if (!texture.loadFromFile("./police office png")) {  // Ensure the correct path and extension are used
        std::cout << "Error loading image" << std::endl;
        return -1;
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

    return 0;
}


// // // herb enters the shop code:
// int main() {
//     // Get the desktop mode to find the screen dimensions
//     sf::VideoMode desktop = sf::VideoMode::getDesktopMode();

//     // Define the window size
//      int windowWidth = 800;
//      int windowHeight = 600;

//     // Calculate the position to center the window
//     int posX = (desktop.width - windowWidth) / 2;
//     int posY = (desktop.height - windowHeight) / 2;

//     // Create the window and position it at (posX, posY)
//     sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Snoop entering!");
//     window.setPosition(sf::Vector2i(posX, posY));  // Center the window

//     // Load the texture
//     sf::Texture texture;
//     if (!texture.loadFromFile("./realHERB.jpg")) {  // Ensure the correct path and extension are used
//         std::cout << "Error loading image" << std::endl;
//         return -1;
//     }

//     // Create sprite with loaded texture
//     sf::Sprite sprite(texture);

//     // Center the sprite inside the window
//     sf::Vector2u textureSize = texture.getSize();  // Texture size
//     float spritePosX = (windowWidth - textureSize.x) / 2.0f;
//     float spritePosY = (windowHeight - textureSize.y) / 2.0f;
//     sprite.setPosition(spritePosX, spritePosY);

//     // Create a clock to measure the time
//     sf::Clock clock;

//     while (window.isOpen()) {
//         sf::Event event;
//         while (window.pollEvent(event)) {
//             if (event.type == sf::Event::Closed) {
//                 window.close();
//                 exit(EXIT_SUCCESS);
//             }
//         }

//         // Check if 5 seconds have passed
//         if (clock.getElapsedTime().asSeconds() >= 5) {
//             window.close();  // Close the window after 5 seconds
//             exit(EXIT_SUCCESS);  // Exit the program if needed
//         }

//         // Clear the window, draw the sprite, and display the contents
//         window.clear();
//         window.draw(sprite);
//         window.display();
//     }

//     return 0;
// }


//    

//     RenderWindow window(VideoMode(800, 600), "snow says hello!");
//     sf::Texture texture;
//     texture.loadFromF(".snow");

//     Sprite sprite(texture);  // Create sprite with loaded texture

//     while (window.isOpen()) {
//         Event event;
//         while (window.pollEvent(event)) {
//             if (event.type == Event::Closed) {
//                 window.close();
//                 cout << "closed" << endl;
//                 exit(EXIT_SUCCESS);
//             }
//         }
//          if (clock.getElapsedTime().asSeconds() >= 10) {
//             window.close();  // Close the window after 10 seconds
//             cout << "Snoop display ended after 10 seconds." << endl;
//             exit(EXIT_SUCCESS);  // Exit the program if needed
//         }

//         window.clear();      // Clear the window
//         window.draw(sprite); // Draw the sprite
//         window.display();    // Display the contents of the window
//     }


//     RenderWindow window(VideoMode(800, 600), "piper enters");
//     sf::Texture texture;
//     texture.loadFromF("./piper");

//     Sprite sprite(texture);  // Create sprite with loaded texture

//     while (window.isOpen()) {
//         Event event;
//         while (window.pollEvent(event)) {
//             if (event.type == Event::Closed) {
//                 window.close();
//                 cout << "closed" << endl;
//                 exit(EXIT_SUCCESS);
//             }
//         }

//         window.clear();      // Clear the window
//         window.draw(sprite); // Draw the sprite
//         window.display();    // Display the contents of the window
//     }


//     RenderWindow window(VideoMode(800, 600), "euphoria enters");
//     sf::Texture texture;
//     texture.loadFromF("./euphoria");

//     Sprite sprite(texture);  // Create sprite with loaded texture

//     while (window.isOpen()) {
//         Event event;
//         while (window.pollEvent(event)) {
//             if (event.type == Event::Closed) {
//                 window.close();
//                 cout << "closed" << endl;
//                 exit(EXIT_SUCCESS);
//             }
//         }

//         window.clear();      // Clear the window
//         window.draw(sprite); // Draw the sprite
//         window.display();    // Display the contents of the window
//     }
