#include <iostream>
#include <string>
#include "Player.h"
 #include <SFML/Graphics.hpp>
#include <iostream>
#include "EndScene.h"
using namespace sf;

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
    
   
    RenderWindow window(VideoMode(800, 600), "SFML Works!");
    

    Sprite sprite(texture);  // Create sprite with loaded texture

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
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
