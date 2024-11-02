/**
 *  CS 150 - Pointer exercises.
 *  Using dynamic memory
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "employee.h"

int main()
{
    cout << fixed << setprecision(2);

    cout << endl << "Part 1-Automatic (stack) variables------" << endl;
    // Create and initialize some variables
    int anInt = 3;
    double aDouble = 2.5;
    float aFloat = 2.5F;
    char aChar = 'S';
    string aString = "Steve";
    int anArray[] = {1, 2, 3};
    Employee anEmployee{"Bob", 23000.0};

    // Print them
    cout << "anInt->" <<  anInt << endl;
    cout << "aDouble->" << aDouble << endl;
    cout << "aFloat->" << aFloat << endl;
    cout << "aChar->" << aChar << endl;
    cout << "aString->" << aString << endl;
    cout << "anArray->[" << anArray[0];
    for (int i = 1; i < 3; i++) cout << ", " << anArray[i];
    cout << "]" << endl;
    cout << "anEmployee->\"" << anEmployee.name
        << "\", $ " << anEmployee.salary << endl;

    cout << endl << "Part 2-Dynamic (heap) variables------" << endl;

    // Exercise 1 - Create the dynamic variables
    int *ip = new int(4);
    double *dp = new double(3.5);
    float *fp = new float(4.5F);
    char *cp = new char('S');
    string *sp = new string("Gilbert");
    int *ia = new int[3] {4, 5, 6};
    Employee* ep = new Employee{"Bill", 24000.0};

    // Exercise 2 - Print them
    cout << "*ip->" <<  *ip << endl;
    cout << "*dp->" << *dp << endl;
    cout << "*fp->" << *fp << endl;
    cout << "*cp->" << *cp << endl;
    cout << "*sp->" << *sp << endl;
    cout << "*ia->[" << ia[0];
    for (int i = 1; i < 3; i++) cout << ", " << ia[i];
    cout << "]" << endl;
    cout << "ep->\"" << ep->name
        << "\", $ " << ep->salary << endl;

    // Exercise 3 - Check and fix the runtime errors (make check)
    delete ip;
    delete dp;
    delete fp;
    delete sp;
    delete cp;
    delete ep;
    delete [] ia;

    return 0;
}

