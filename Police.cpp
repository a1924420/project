#include <iostream>
#include <string>
#include "Person.h"
#include "Customer.h"
#include "Police.h"

using namespace std;

void Police::arrest(){
    cout << "Stop right there, you’ve been arrested for selling medication without a proper license!" << endl;
    exit(0); // ends game at this point - ends entire code run
}

void Police::rightDialogue(){
    cout << "Hmm okay, have a good day" << endl;
}
void Police::wrongDialogue(){
    cout << "This isn't right" << endl;
    arrest();
}
