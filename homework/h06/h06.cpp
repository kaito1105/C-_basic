/**
 *  @author Kaito Miyamoto
 *  @date June 22, 2023
 *  @file h06.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h06.h"

// Place your function definitions in this file.
string zipZap(const std::string& str)
{
    string result;
    size_t i = 0;
    size_t len = str.size();

    if (len < 3) { return str; }
    while (i < len - 2)
    {
        string subs = str.substr(i , 3);
        if (subs.front() == 'z' && subs.back() == 'p')
        {
            result += "zp";
            i += 3;
        }
        else
        {
            result += str.at(i);
            i++;
        }

    }
    if (str.at(len - 3) != 'z' || str.at(len - 1) != 'p')
    {
        result += str.substr(len - 2);
    }
    return result;
}


int countCode(const std::string & str)
{
    const int slen = 4;
    int count = 0;
    for (size_t i = slen, len = str.size(); i <= len; ++i)
    {
        string subs = str.substr(i - slen, slen);
        if (subs.substr(0, 2) == "co" && subs.back() == 'e')
        {
            count++;
        }
    }
    return count;
}


string everyNth(const std::string & str, int n)
{
    string result;
    for (size_t i = 0, len = str.size(); i < len; ++i)
    {
        if (i % n == 0)
        {
            result = result + str.at(i);
        }
    }
    return result;
}


bool prefixAgain(const std::string& str, int n)
{
    bool result{false};
    string prefix = str.substr(0, n);
    for (size_t i = 1, len = str.size(); i <= len - n; i++)
    {
        string subs = str.substr(i , n);
        if (prefix == subs)
        {
            result = true;
        }
    }
    return result;
}


////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;
    prefixAgain("abXYabc", 1);
    return 0;
}
