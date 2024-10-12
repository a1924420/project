
#include "Patient.h"
#include "PatientTest.h"
#include <iostream>
#include <vector>

int main() {
  PatientTest patientTest;

  patientTest.runTests();

  return 0;
}

int main() {
  patient patient1("Eren Jaeger", 19, 12345, "anxiety", " had a broken arm due to accident", 09876);

  patient patient2("armin arlet", 18, 2222, "low iron", " none", 64983);

  cout << "patient details:" << endl;

  cout << "name:" << patient1.getName() << endl;

  cout << "age: " << patient1.getAge() << endl;
  cout << "ID: " << patient1.getID() << endl;
  cout << "illness: " << patient1.getIllness() << endl;
  cout << "medical history: " << patient1.getMedicalHistory() << endl;
  cout << "prescription ID: " << patient1.getPrescriptionID() << endl;

  cout << ednl;

  cout << "patient details:" << endl;

  cout << "name:" << patient2.getName() << endl;

  cout << "age: " << patient2.getAge() << endl;
  cout << "ID: " << patient2.getID() << endl;
  cout << "illness: " << patient1.getIllness() << endl;
  cout << "medical history: " << patient2.getMedicalHistory() << endl;
  cout << "prescription ID: " << patient2.getPrescriptionID() << endl;

  cout << endl;
  patient1.greetingDialogue(patient1);

  patient2.greetingDialogue(patient2);

  patient1.rightDialogue();

  patient2.wrongDialogue();
}
