#include <string>
using namespace std;

string ASSIGNMENT = "ic15a-A";

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "programmer.h"
// Implement your member functions here
Programmer::Programmer(const std::string& n, double s)
    : Employee(n, s)
{
}

std::string Programmer::getName() const
{
    return Employee::getName() + " (Programmer)";
}


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
using namespace std;
int run()
{
    cout << "Student testing" << endl;


    return 0;
}






