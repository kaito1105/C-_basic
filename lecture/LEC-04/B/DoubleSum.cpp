#include <string>
using std::string;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name

// Write your function here
int doubleSum(int a, int b)
{
    int result{a + b};
    if (a == b)
    {
        result = 2 * result;
    }
    // else
    // {
    //     result = a + b;
    // }
    return result;
}
