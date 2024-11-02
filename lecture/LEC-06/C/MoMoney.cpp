#include <string>
using std::string;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name

// Write your function here
double moMoney(const string& str)
{
    double result{0.0};
    double dollars{0};
    double cents{0};
    bool inCents{false};
    double base = 10.0;

    for (size_t i = 0, len = str.size(); i < len; ++i)
    {
        char c = str.at(i);
        if (c == '.')
        {
            inCents = true;
            continue;
        }
        if (! isdigit(c)) continue;

        // '0' <- ASCII 48
        double digit = c - '0';

        if (inCents)
        {
            cents = cents + digit / base;
            base *= 10;
        }
        else
        {
            dollars = dollars * 10 + digit;
        }
    }
    result = dollars + cents;
    return result;
}