# Backyard Pharmacy

The main purpose of this game is to provide entertainment. It will also acknowledge how common drug abuse is, and the various reasons why people do it, providing an educational angle. The main demographic of this game are ages 17 and up, due to sensitive content, and enjoyers of dark humour.
The game is a satirical representation of working as a pharmacist in an unlicensed establishment. During the day, both patients and undercover police officers will enter the pharmacy in order to buy medicine. These customers will give their age, name, and medical history, which the user must use in order to identify the right medicine. Guessing correctly will earn the player points. However, the player will also have the option to deny customers if they seem suspicious; these may be undercover police attempting to catch the player in the middle of a crime. If the player fails to deny a police officer, they will be ‘arrested’ and the game will promptly end.

## How to play:

You're playing as a pharmacist and your job is to deliver medicine to patients. 
To do so, heed your patients' description of their ailments and match them up with the right meds. 
"Be warned though! Some patients are not what they seem... 
"If you feel something is off, deny them! Undercover cops are around every corner. 
"Be sure to get medicine to as many patients as possible without giving one to a cop. 
"Otherwise you may find that something unpleasant will happen...

As the player, you will be given prompts, and throughout the main portion of the game there will be different actions you can do based on your input.

Action inputs:
- "age": request to see the current customer's age
- "medical history": request to see the current customer's medical history
- "storage": request to see the stock of medicines which the pharmacy stores
- "sell": sell a medicine to the current customer, if customer is not a police officer you will be prompted to input a medicine to serve   to the customer:
    - "medicine 1"
    - "medicine 2"
    - "medicine 3"
    - "medicine 4"
    - "medicine 5"
- "deny": deny service to a customer if you suspect they are an officer
- "menu": return to the menu to select one of three options:
    - How to play: receive instructions on how to play the game
    - About game: receive information about the game including the name, developers, publisher, release date and genre
    - Start game/Return to game: Return to your current state in the game

## Features:

- Game class: Contains variable regarding the game details with associated constructors and functions.
- Person class: Abstract class containing variable regarding all character details with associated virtual functions.
- Player class: Contains variable regarding the user's details with associated constructors and functions.
- Customer class: Contains variable regarding the customer's details, both patients and police, with associated constructors and functions.
- Patient class: Contains variable regarding the patient's details with associated constructors and functions.
- Police class: Contains variable regarding the police officer's details with associated constructors and functions.
- Visitor class: Contains the array of customers that the user interacts with throughout the game with associated constructors and functions.
- Storage class: Contains the array of medicines the user can sell to customers in the game with associated constructors and functions.
- Medicine class: Contains variable regarding the medicine details with associated constructors and functions.
- EndScene class: Contains functions associated to the game's ending.

## Requirements:

- C++11 or higher
- g++ compiler or equivalent
- Makefile

## Installation:

1. Clone the repository:
    ```bash
    git clone https://github.com/a1924420/project.git
    cd project
    ```
2. Compile the project:
    ```bash
    	clang++ Customer.cpp EndScene.cpp Game.cpp Medicine.cpp Patient.cpp Person.cpp Player.cpp Police.cpp Storage.cpp Visitor.cpp main.cpp -o backyardPharmacy
        ./backyardPharmacy
    ```

