/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h17.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h17.h"
// Add your implementation here
istream& read(std::istream& in, Point& p)
{
    char ch;
    in >> p.x >> ch >> p.y;
    return in;
}

ostream& write(std::ostream& out, const Point& p)
{
    out << '(' << p.x << ", " << p.y << ')';
    return out;
}

double distanceBetween(const Point& a, const Point& b)
{
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

Point midpoint(const Point& a, const Point& b)
{
    int midX = (a.x + b.x) / 2;
    int midY = (a.y + b.y) / 2;
    return {midX, midY};
}



/////////////// STUDENT TESTING ////////////////////
#include <sstream>
int run()
{
    cout << "Student testing" << endl;
    // istringstream in("3, 4");
    // Point p1;
    // if (read(in, p1)
    //   write(cout, p1) << endl;
    return 0;
}
