#include <string>
using std::string;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name

// Write your function here
void toUpper(string& str)
{
    const int case_diff = 'a' - 'A';
    for (char& c : str)
    {
        if (c >= 'a' && c <= 'z') // islower
        {
            c -= case_diff;
        }
    }
}