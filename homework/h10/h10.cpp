/**
    @file h10.cpp
    @author Kaito Miyamoto
    @version Summer 2023
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h10.h"

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

// Add your function implementations here
bool find(const std::string& s, const std::string& t)
{
    if (s.substr(0, t.length()) == t) return true;
    if (s.length() < t.length()) return false;
    else
    {
        return find(s.substr(1), t);
    }
}

std::string stringClean(const std::string& str)
{
    if (str.length() <= 1) return str;
    if (str[0] == str[1]) return stringClean(str.substr(1));
    return str[0] + stringClean(str.substr(1));
}

////////////////// Student Testing //////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}

