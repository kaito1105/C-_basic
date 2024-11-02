#include <string>
using std::string;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name

// Write your function here
string toReverse(const string& str)
{
    string result;

    // for (size_t i = 0, len = str.size(); i < len; ++i)
    // {
    //     result = str.at(i) + result;
    // }

    for (size_t i = str.size(); i > 0; --i)
    {
        result += str.at(i - 1);
    }
    return result;
}