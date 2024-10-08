#include "Player.h"
#include "Person.h"
#include "EndScene.h"

#include <iostream>
#include <string>

using namespace std;

// BUGS: answering 'answer' with a string/char always leads to the '0' option being selected in prologue

bool prologue(Player user) {

    int answer = 2;

    cout << "It's a beautiful day outside and you're a terrible student. \n"
    << "Your name is " << user.getName() << " and you're " << user.getAge() << " years young. \n"
    << "Today, you're starting your new job as a real pharmacist. \n"
    << "What wonders will await you on your first shift? \n" 
    << "You ponder that as you open your backdoor and enter your backyard. \n"
    << "Which also happens to be your new workspace. \n"
    << "That's right... you're a backyard pharmacist! \n";

    cout << "Now, are you ready to start? \n"
    << "Type 0 for yes and 1 for no.";

    cin >> answer;

    while (answer != 0 && answer != 1) {
        cout << "I don't remember " << answer << " being an option I gave. Answer properly. \n";
        cin >> answer;
    }

    if (answer == 0) {
        cout << "Great job! \n" 
        << "Let's get you to your first customer, who's coming through the unlocked side entrance that leads directly to your kitchen now.";
        
        return true;
    }

    else if (answer == 1) {
        cout << "Why did you open this game then?";
       
        return false;
    }

    else {
        cout << "Error occurred...";
    }

    return false;
}

int main() {
    string name = "";
    int age; 

    cout << "What is your name? \n";
    cin >> name;
    
    cout << "What is your age? \n";
    cin >> age;

    Player user(name, age, 0, 0);

    prologue(user);

    return 0;
}