/**
 *  @file extreme.cpp
 *  @version CS 150 In-class Exercises
 */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas id here.

/**
    Write the function bigDiff().
    Returns the difference between the smallest and
    largest elements in numbers.

    @param numbers an array of int. (not modified)
    @param len the number of elements in the array.
    @return difference between largest and smallest.
*/
int bigDiff(const int numbers[], size_t len)
{
    int largest = numbers[0];
    int smallest = numbers[0];

    for (size_t i = 1; i < len; ++i)
    {
        if (numbers[i] > largest) { largest = numbers[i]; }
        else if (numbers[i] < smallest) { smallest = numbers[i]; }
    }
    return largest - smallest;
}


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
