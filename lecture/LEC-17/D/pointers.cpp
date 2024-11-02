/**
 *  CS 150 - Pointer and a function
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Write a function that takes a pointer
// to int as its only parameter. Inside the
// function, fill the pointer's indirect
// value with a random number.
void randomize(int *p)
{
    *p = rand(); // csdlib
}

int main()
{
    srand(static_cast<unsigned>(time(0)));

    // Create and initialize an int variable
    int n = 42;
    // Print the value in your variable
    cout << "before, n->" << n << endl;
    // Pass its address to the function
    randomize(&n);
    // Print the value in the variable again.
    cout << "after, n->" << n << endl;

    return 0;
}








