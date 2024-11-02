#include <cstdlib>  // abs for integers
using namespace std;

// Write your function here
int lastDigit(int number)
{
    int result{0};
    // 3567
    result = abs(number % 10);

    return result;
}