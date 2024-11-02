#include <string>
using std::string;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name

// Write your function here
int countCode(const string& str)
{
    int result{0};
    size_t slen = 4;
    // for (size_t i = 0, len = str.size(); i < len; ++i)
    // {
    //     string subs = str.substr(i, slen);
    //     if (subs.size() == 4 && subs.substr(0, 2) == "co" && subs.back() == 'e')
    //     {
    //         result++;
    //     }
    // }

    for (size_t i = slen, len = str.size(); i <= len; ++i)
    {
        string subs = str.substr(i - slen, slen);
        if (subs.substr(0, 2) == "co" && subs.back() == 'e')
        {
            result++;
        }
    }

    return result;
}