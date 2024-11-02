#include <string>
#include <iostream>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas id here.

// Write your function here
int sumEvens(istream& in)
{
    int sum = 0;
    int n;
    while (in >> n)
    {
        if (n % 2 == 0) { sum += n;}
    }
    return sum;
}




/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
