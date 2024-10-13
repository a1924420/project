#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
#include "Customer.h"
#include "Patient.h"
#include "Police.h"
#include "Medicine.h"
#include "Player.h" 
#include "Visitor.h"
#include "VisitorTest.h"

// Main function to run all testing units
int main(){
    VisitorTest test;

    test.runTests();
}