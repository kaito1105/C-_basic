#include <string>
#include <iostream>
#include <sstream>
#include <cassert>
#include <stdexcept>
using namespace std;

#include "inthelper.h"

string STUDENT = "kmiyamoto5"; // Add your Canvas id here.

// Write your functions here
/**
 * Converts a string to an integer.
 * @param str the string to convert.
 * @pre str will contain valid digits and an optional sign ("-123").
 * @exception invalid_argument if str contains invalid characters.
 * @return the integer result.
*/
int parseInt(const std::string& str)
{
    istringstream in(str);
    int n;
    in >> n;
    if (!in.fail() && in.eof()) return n;
    in >> ws;
    if (!in.fail() && in.eof()) return n;
    throw invalid_argument(str + " is not an integer");
}

/**
 * Reads and integer from the console.
 * @param prompt will be displayed if passed with a colon.
 * @return the int read.
 * @post keeps prompting until a valid interger entered.
*/
int readInt(const std::string& prompt)
{
    while (true)
    {
        if (prompt != "") // !prompt.empty()
        {
            cout << prompt;
            if (prompt.back() != ' ')
                cout << ": ";
        }
        string value;
        cin >> value;
        try {
            return parseInt(value);
        }
        catch (invalid_argument& e) {
            cerr << "Sorry, " << value << " is not an integer." << endl;
        }
    }
    assert(false); // this is unreachable

}


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    cout << parseInt("125") << endl;
    //cout << parseInt("15.2") << endl;
    int n = readInt("Enter a number");
    cout << "You entered " << n << endl;

    return 0;
}
