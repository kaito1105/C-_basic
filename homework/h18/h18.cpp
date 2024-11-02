/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h18.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h18.h"
// Add your implementation here

double perimeter(const Triangle& t)
{
    return distanceBetween(t.p1, t.p2)
            + distanceBetween(t.p1, t.p3) + distanceBetween(t.p2, t.p3);
}

/////////////// STUDENT TESTING ////////////////////
#include <sstream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
