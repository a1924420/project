#include <iostream>
#include <string>
#include "Player.h"
 #include <SFML/Graphics.hpp>
#include "EndScene.h"


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
    
   
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Works!");
    

    sf::Sprite sprite(texture);  // Create sprite with loaded texture

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                cout << "Event closed" << endl;
                exit(EXIT_SUCCESS);
            }
        }

        window.clear();      // Clear the window
        window.draw(sprite); // Draw the sprite
        window.display();    // Display the contents of the window
    }

}


    cout << "'Hey, freeze! It's the police!' \n";
    cin.get();
    cout << "Wait, what? \n";
    cin.get();
    cout << "'We received a tip... but that'll just be the tip of the ice-berg when you're in court!' \n" << endl;
}
