/**
 *  @author Kaito Miyamoto
 *  @date July 15, 2023
 *  @file h25.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h25.h"

// Add your code here
int alternatingSum(const int a[], size_t size)
{
    int sum = 0;
    for (size_t i = 0; i < size; ++i)
    {
        if (i % 2 == 0)
        {
            sum += a[i];
        }
        else
        {
            sum -= a[i];
        }
    }
    return sum;
}

MinMax minMax(const double *ptr, size_t size)
{
    if (size == 0) { return {nullptr, nullptr}; }
    // Pointer ptr points to first element
    // Structure result {min=ptr, max=ptr}
    MinMax result;
    result.min = ptr;
    result.max = ptr;
    // Pointer atEnd <- address past the end of the sequence
    const double * atEnd = ptr + size;
    // Increment ptr // point to second element
    ++ptr;
    // While the ptr < atEnd Do
    while (ptr < atEnd)
    {
        // If *ptr > *result.max Then result.max <- ptr
        if (*ptr > *(result.max))
        {
            result.max = ptr;
        }
        // If *ptr < *result.min Then result.min <- ptr
        if (*ptr < *(result.min))
        {
            result.min = ptr;
        }
        // Increment ptr
        ++ptr;
    }
    return result;
}

bool sameSet(const int *aBeg, const int *aEnd, const int *bBeg, const int *bEnd)
{
    size_t aLen = aEnd - aBeg;
    size_t bLen = bEnd - bBeg;
    bool found;

    if (aLen > bLen)
    {
        for (size_t i = 0; i < aLen; ++i)
        {
            found = false;
            for (size_t j = 0; j < bLen; ++j)
            {
                if (aBeg[i] == bBeg[j])
                {
                    found = true;
                    break;
                }
            }
            if (!found) { return false; }
        }
    }
    else
    {
        for (size_t i = 0; i < bLen; ++i)
        {
            found = false;
            for (size_t j = 0; j < aLen; ++j)
            {
                if (bBeg[i] == aBeg[j])
                {
                    found = true;
                    break;
                }
            }
            if (!found) { return false; }
        }
    }
    return true;
}

/////////////// STUDENT TESTING ////////////////////

int run()
{
    cout << "Try some code on your own" << endl;

    return 0;
}
