/**
 *  @author Kaito Miyamoto
 *  @date July 2, 2023
 *  @file h15.cpp
 */
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h15.h"

// Write your function here
void tokenStats(std::istream& in, std::ostream& out)
{
    string line;
    int lineCount = 0;
    int tokenCount = 0;
    unsigned longestToken = 0;
    string longestLine = "";

    while (getline(in, line))
    {
        if (line.length() >= longestLine.length())
        {
            longestLine = line;
        }
        lineCount++;
        istringstream ss{line};
        string str;
        while (ss >> str)
        {
            tokenCount++;
            if (str.size() >= longestToken)
            {
                longestToken = str.length();
            }

        }
        out << "Line " << lineCount << " has " << tokenCount
            << " tokens (longest = " << longestToken << ")" << endl;

        tokenCount = 0;
        longestToken = 0;
    }
    out << "Longest line: " << longestLine << endl;
}



///////////////// Student Testing /////////////////////////
int run()
{
    cout << "Student tests" << endl;
    return 0;
}
