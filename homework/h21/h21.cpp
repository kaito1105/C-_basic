/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h21.cpp
 */
#include <vector>
#include <string>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h21.h"

// Add your implementation here
std::vector<int> merge(const std::vector<int>& a,
                       const std::vector<int>& b)
{
    vector<int> result;
    size_t i = 0;
    size_t j = 0;

    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            result.push_back(a[i]);
            i++;
        }
        else
        {
            result.push_back(b[j]);
            j++;
        }
    }
    while (i < a.size())
    {
        result.push_back(a[i]);
        i++;
    }
    while (j < b.size())
    {
        result.push_back(b[j]);
        j++;
    }
    return result;
}


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
	 return 0;
}
