/**
 *  @author Kaito Miyamoto
 *  @date June 22, 2023
 *  @file h07.cpp
 */
#include <string>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h07.h"

// Put your function implementation (definitions) in this file
string codeForDigit(int digit)
{
    string result;
    switch (digit)
    {
        case 1:
            return ":::||";
        case 2:
            return "::|:|";
        case 3:
            return "::||:";
        case 4:
            return ":|::|";
        case 5:
            return ":|:|:";
        case 6:
            return ":||::";
        case 7:
            return "|:::|";
        case 8:
            return "|::|:";
        case 9:
            return "|:|::";
        case 0:
            return "||:::";
    }
    return "";
}

int checkDigit(int zip)
{
    int sum = 0;
    int check = 0;
    while (zip > 0)
    {
        sum = sum + zip % 10;
        zip = zip / 10;
    }
    check = 10 - sum % 10;
    if (check == 10) { check = 0; }
    return check;
}


string barCode(int zip)
{
    string result;
    string code;
    string check = codeForDigit(checkDigit(zip));
    int num = 0;
    while (zip > 0)
    {
        num = zip % 10;
        code = codeForDigit(num) + code;
        zip /= 10;
    }
    result = "|" + code + check + "|";
    return result;
}

/////////// Student Testing ///////////////////////
int run()
{
    return 0;
}
