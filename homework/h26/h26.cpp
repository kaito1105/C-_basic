/**
 *  @author Kaito Miyamoto
 *  @date July 16, 2023
 *  @file h26.cpp
 */
#include <string>
#include <stdexcept>
// Other headers if necessary
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h26.h"

// Add your code here
void copyEvens(const int a[], size_t aSize, int b[], size_t& bSize)
{
    if (bSize < aSize) { throw length_error("Error: invalid length"); }
    // bSize = 0;
    // for (size_t i = 0; i < aSize; i++)
    // {
    //     if (a[i] % 2 == 0) { b[bSize++] = a[i];}
    // }

    auto pb = b;
    for (auto p = a, end = a + aSize; p != end; p++)
    {
        if (*p % 2 == 0) { *pb++ = *p; }
        bSize = pb - b;
    }

}

int cliqueCount(const int a[], size_t aSize)
{
    int count = 0;
    bool cliques = false;
    for (size_t i = 1; i < aSize; ++i)
    {
        if (a[i - 1] == a[i]) { cliques = true; }
        else
        {
            if (cliques)
            {
                count++;
                cliques = false;
            }
        }
    }
    if (cliques) { count++; }
    return count;

}

void sevenEleven(int a[], size_t aSize)
{
    for (size_t i = 0; i < aSize; ++i)
    {
        if (a[i] == 7 && a[i + 1] != 11)
        {
            for (size_t j = i + 1; j < aSize; ++j)
            {
                if (a[j] == 11)
                {
                    a[j] = a[i + 1];
                    a[i + 1] = 11;
                    break;
                }
            }
        }
    }
    for (size_t i = 1; i < aSize; ++i)
    {
        if (a[i] == 11 && a[i - 1] != 7)
        {
            for (size_t j = i + 1; j < aSize; ++j)
            {
                if (a[j] == 7 && a[j + 1] != 11 && j != aSize - 1)
                {
                    a[i] = a[j + 1];
                    a[j + 1] = 11;
                    break;
                }
            }
        }
    }
}


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}
