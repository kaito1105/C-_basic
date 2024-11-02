#include <vector>
#include <string>
using std::string;
using std::vector;

string STUDENT = "kmiyamoto5"; // Your Canvas ID goes here

// Add your function here
int divisibleBy(const vector<int>& v, int n)
{
    int divisible = 0;
    for (int e : v)
    {
        if (e % n == 0) { divisible++;}
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