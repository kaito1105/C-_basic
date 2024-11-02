#include <string>
using std::string;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name

// Write your function here
string flipCase(const string& str)
{
    string result;
    const int diff = 'a' - 'A'; // case difference
    for (auto c : str)
    {
        // A = 65
        // ABCDEFGH... // countiguous
        if (c >= 'A' && c <= 'Z') // isupper
        {
            c += diff;
        }
        // a = 97
        // abcdefgh...
        else if (c >= 'a' && c <= 'z') // islower
        {
            c -= diff;
        }
        result += c;
    }

    return result;
}