/**
 *  @author Kaito Miyamoto
 *  @date Summer 2023
 *  @file h09.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h09.h"

// Place your function definitions in this file.
bool read(const std::string& prompt, int& n, bool ln)
{
    bool result;
    cout << prompt;
    cin >> n;
    if (cin.fail()) result = false;
    else
    {
        result = true;
        cin.ignore(1024, '\n');
        cin.clear();
    }
    return result;
}

bool read(const std::string& prompt, double& n, bool ln)
{
    bool result;
    cout << prompt;
    cin >> n;
    if (cin.fail()) result = false;
    else
    {
        cin.ignore(1024, '\n');
        result = true;
    }
    return result;
}

bool read(const std::string& prompt, std::string& s, bool ln)
{
    cout << prompt;
    if (ln) getline(cin, s);
    else cin >> s;
    return ln;
}

bool read(char& c, char sentinel)
{
    bool result = true;
    cin.get(c);
    if (c == sentinel) result = false;
    return result;
}

////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;

    // int age;
    // if (read("How old are you? ", age))
    //     cout << "You don't look " << age << " years old!" << endl;
    // else
    //     cout << "Hmm. Doesn't look like you entered an int." << endl;

    // double gpa;
    // if (read("What is your gpa? ", gpa, true))
    //     cout << "Wow! " << fixed << setprecision(2) << gpa << "? I'm impressed." << endl;
    // else
    //     cout << "Sorry. I can't understand what you typed." << endl;

    // string name;
    // if (read("What is your full name? ", name, true))
    //     cout << "Hi " << name << ". Glad to meet you." << endl;
    // else
    //     cout << "Hmm. Is that your FULL name?" << endl;

    // cout << "Type a sentence ending in a period: ";
    // char ch;
    // while (read(ch, '.')) cout << ch;
    // cout << "." << endl;

    return 0;
}

