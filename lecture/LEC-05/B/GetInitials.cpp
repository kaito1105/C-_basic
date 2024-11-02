#include <string>
using namespace std;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name

// Write your function here
string initials(const string& str)
{
    string result;
    // char first = str.at(0); // str[0], str.front()
    // char second = str.at(first_space + 1);
    // char third = str.at(last_space + 1);

    string first = str.substr(0, 1);
    size_t first_space = str.find(' ');
    string second = str.substr(first_space + 1, 1);
    size_t last_space = str.rfind(' ');
    string third = str.substr(last_space + 1, 1);
    
    result = ""s + first + second + third;

    return result;
}