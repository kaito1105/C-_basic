/**
 *  CS 150 - Pointers, addresses, and so on exercises.
 */
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

const double PI = 3.1459;

int main()
{
    // Create some variables
    int n = 37;
    string name = "Steve";
    Employee waiter = {"Bob", 23000.0};

    // Print the variables
    cout << "n = " << n << endl;
    cout << "PI = " << PI << endl;
    cout << "name = " << name << endl;
    cout << "waiter = " << waiter << endl;

    // EXERCISE 1: print address and size of each
    // n lives at xxxx and uses xx bytes
    cout << "n lives at " << &n << " and uses " << sizeof(n) << " bytes" << endl;
    cout << "PI lives at " << &PI << " and uses " << sizeof(PI) << " bytes" << endl;
    cout << "name lives at " << &name << " and uses " << sizeof(name) << " bytes" << endl;
    cout << "waiter lives at " << &waiter << " and uses " << sizeof(waiter) << " bytes" << endl;

    // EXERCISE 2: create pointer to each variable
    int *ip = &n;
    const double *dp = &PI; // auto dp = &PI;
    string *sp = &name;
    Employee* ep = &waiter;

    // EXERCISE 3: print pointers' address, direct and indirect value
    cout << "ip contains " << ip << ", is stored at " << &ip
        << ", and points to " << *ip << "." << endl;
    cout << "dp contains " << dp << ", is stored at " << &dp
        << ", and points to " << *dp << "." << endl;
    cout << "sp contains " << sp << ", is stored at " << &sp
        << ", and points to " << *sp << "." << endl;
    cout << "ep contains " << ep << ", is stored at " << &ep
        << ", and points to " << *ep << "." << endl;

    return 0;
}
