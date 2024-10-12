#ifndef PATIENTTEST_H
#define PATIENTTEST_H

#include "Patient.h"
#include <iostream>


class PatientTest {
public:
    // Method to run all the tests
    void runTests();

private:
    // Individual test methods
    void testConstructor();
    void testGetterSetter();
    void testDialogue();
};

#endif
