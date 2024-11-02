#include <string>
using std::string;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name

// Write your function here
string season(int month, int day)
{
    string result;

    if (month < 1 || month > 12 || day < 1 || day > 31)
    {
        result = "Invalid";
    }
    else if ((month == 12 && day > 15) || month < 3 || (month == 3 && day <= 15))
    {
        result = "Winter";
    }
    else if (month < 6 || (month == 6 && day <= 15))
    {
        result = "Spring";
    }
    else if (month < 9 || (month == 9 && day <= 15))
    {
        result = "Summer";
    }
    else
    {
        result = "Fall";
    }
    return result;
}