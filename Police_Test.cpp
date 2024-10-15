// testfile for police,

#include "Person.h"
#include "Police.h"
#include "PoliceTest.h"
#include <iostream>
#include <vector>
using namespace std;
int main() {
  PoliceTest policeTest;

  policeTest.runTests();

  return 0;
}

/*int main() {

    Police officer1("snow", 35, 112233, "No known illnesses");

    Police officer2("herb", 40, 223344, "has the Flu");

    cout << "Officer 1 Details:" << endl;
    cout << "Name: " << officer1.getName() << endl;
    cout << "Age: " << officer1.getAge() << endl;
    cout << "ID: " << officer1.getID() << endl;
    cout << "Illness: " << officer1.getIllness() << endl;

    cout << endl;

    cout << "Officer 2 Details:" << endl;
   std::cout << "Name: " << officer2.getName() << endl;
    cout << "Age: " << officer2.getAge() << endl;
    cout << "ID: " << officer2.getID() << endl;
    cout << "Illness: " << officer2.getIllness() << endl;

    cout << endl;

    cout << "Testing Police Actions:" << endl;

    officer1.rightDialogue(); // police officer leaves
   officer2.wrongDialogue(); // officer arrest the player

   cout<< "New Police Officer Added:" <<endl;

    Police officer3("spice ", 50, 334455, "Broken leg");
    cout << "Officer 3 Details:" << endl;
  cout << "Name: " << officer3.getName() << endl;
    cout << "Age: " << officer3.getAge() << endl;
    cout << "ID: " << officer3.getID() << endl;
    cout << "Illness: " << officer3.getIllness() << endl;

    cout << endl;

    vector<Police> policeList = {officer1, officer2, officer3};

    for (int i = 0; i < policeList.size(); i++) {
        cout << "Police Officer " << i+1 << " Details:" << endl
        cout << "Name: " << policeList[i].getName() << endl;
        cout << "Age: " << policeList[i].getAge() << endl;
        cout << "ID: " << policeList[i].getID() << endl;
        cout << "Illness: " << policeList[i].getIllness() << endl;
    }

    return 0;
}
*/

// patient file: