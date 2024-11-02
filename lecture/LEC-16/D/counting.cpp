#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string STUDENT = "kmiyamoto5"; // Your Canvas ID goes here

/**
 * Write the function divisibleBy.
 * Use an iterator loop.
 */

int divisibleBy(const vector<int>& v, int n)
{
    int divisible = 0;

    for (auto itr = begin(v); itr != end(v); ++itr)
    {
        if (*itr % n == 0) { divisible++; }
    }
    return divisible;
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
using namespace std;
int run()
{
    cout << "Student testing" << endl;

    return 0;
}