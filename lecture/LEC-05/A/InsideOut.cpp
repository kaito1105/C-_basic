#include <string>
using namespace std;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name


// Write your function here
string insideOut(const string& str)
{
    string result;
    string::size_type len = str.size(); //verbose
    // size_t len = str.size(); // pattern2
    // auto len = str.size(); // pattern3
    if (len < 3)
    {
        result = str;
    }
    else if (len % 2 == 1) // odd
    {
        char mid = str.at(len / 2);
        result = mid + str.substr(0, len / 2)
            + str.substr(len / 2 + 1) + mid;
    }
    else //even
    {
        string mid = str.substr(len / 2 - 1, 2);
        string front = str.substr(0, len / 2 - 1);
        string back = str.substr(len / 2 + 1);
        result = mid.at(0) + front + back + mid.at(1); // mid[1], mid.back()
    }
    return result;
}