/**
 *  @author Kaito Miyamoto
 *  @date July 21, 2023
 *  @file h27.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h27.h"

// Add your code here
void reverse(char * s)
{
    char* sub = s;
    while (*sub != '\0')
        sub++;
    sub--;
    while (s < sub)
    {
        char temp = *s;
        *s = *sub;
        *sub = temp;

        s++;
        sub--;
    }
}

const char * findStr(const char *str1, const char *str2)
{
    if (*str2 == '\0') return str1;
    while (*str1 !=  '\0')
    {
        const char* p1 = str1;
        const char* p2 = str2;

        while (*p1!= '\0' && *p2 != '\0' && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        if (*p2 == '\0') return str1;

        str1++;
    }
    return nullptr;
}



//////////////////////// STUDENT TESTING //////////////////////////

int run()
{
    cout << "Add your own tests here" << endl;
    return 0;
}
