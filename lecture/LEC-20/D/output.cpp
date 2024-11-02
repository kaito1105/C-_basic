/**
 *  @file output.cpp
 *  @version CS 150 In-class Exercises
 */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas id here.

/**
    Write the procedure (void function) tenRun.

    For each multiple of 10 in the given array,
    change all the values following it to be
    that multiple of 10, until encountering
    another multiple of 10. So {2, 10, 3, 4, 20, 5}
    becomes {2, 10, 10, 10, 20, 20}.

    Some examples:
        tenRun({2, 10, 3, 4, 20, 5}) becomes {2, 10, 10, 10, 20, 20}
        tenRun({10, 1, 20, 2}) becomes {10, 10, 20, 20}
        tenRun({10, 1, 9, 20}) becomes {10, 10, 10, 20}

    @param numbers an array of int. (modified in the function)
    @param len the number of elements in the array.
*/
void tenRun(int numbers[], size_t len)
{
    int remembered = -1;
    for (size_t i = 0; i < len; ++i)
    {
        if (numbers[i] % 10 == 0)
        {
            // remember it
            remembered = numbers[i];
        }
        else
        {
            // store remembered value in numbers[i]
            if (remembered != -1)
            {
                numbers[i] = remembered;
            }
        }
    }
}


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
