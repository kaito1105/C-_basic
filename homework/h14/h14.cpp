/**
 *  @author Kaito Miyamoto
 *  @date July 2, 2023
 *  @file h14.cpp
 */
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h14.h"

// Define your functions here
std::string getLine(const string& prompt)
{
    string line;
    if (!prompt.empty())
    {
        if (!isspace(prompt.back()))
        {
            cout << prompt << " ";
        }
        else
        {
            cout << prompt;
        }
    }
    getline(cin, line);
    return line;
}

int getInt(const string& prompt)
{
    string line;
    line = getLine(prompt);
    while (true)
    {
        if (!line.string::empty())
        {
            istringstream in{line};
            int n;
            in >> n;
            if (!in.fail() && in.eof()) return n;
            in >> ws;
            if (!in.fail() && in.eof()) return n;
        }
        cout << "error" << endl;
        line.clear();
        line = getLine(prompt);
    }
}

double getReal(const string& prompt)
{
    string line;
    line = getLine(prompt);
    while (true)
    {
        if (!line.string::empty())
        {
            istringstream in{line};
            double n;
            in >> n;
            if (!in.fail() && in.eof() &&
                (line.find('e') != string::npos || line.find('E') != string::npos ||
                line.find('.') != string::npos))
            {
                return n;
            }
            in >> ws;
            if (!in.fail() && in.eof() &&
                (line.find('e') != string::npos || line.find('E') != string::npos ||
                line.find('.') != string::npos))
            {
                return n;
            }
        }
        cout << "error" << endl;
        line.clear();
        line = getLine(prompt);
    }
    return 0;
}

bool getYN(const string& prompt)
{
    char ch;
    while (cin.get(ch))
    {
        if (ch == 'Y' || ch == 'y')
        {
            return true;
            break;
        }
        if (ch == 'N')
        {
            return false;
            break;
        }
    }
    return false;
}

/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    // do
    // {
    //     string s = getLine("Enter a string: ");
    //     cout << "s->\"" << s << "\"" << endl;
    //
    //     int n = getInt("Enter an integer:");
    //     cout << "n->" << n << endl;
    //
    //     double d = getReal("Enter a real number: ");
    //     cout << "d->" << d << endl;
    //
    // } while (getYN("Try again? (Y/N)"));

    return 0;
}
