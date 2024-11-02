#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;

extern const string STUDENT = "kmiyamoto5";

// Complete the toDollars function
string toDollars(double amt)
{
    ostringstream out;
    out << fixed << setprecision(2);
    out << amt;
    string result = out.str();
    if (result.size() > 6)
    {
        int pos = static_cast<int>(result.size()) - 6;
        result = result.substr(0, pos) + "," + result.substr(pos);
        pos -= 3;
        while (pos > 0)
        {
            result = result.substr(0, pos) + "," + result.substr(pos);
            pos -= 3;
        }
    }
    return "$ " + result;
}


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
