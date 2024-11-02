/**
    @file h32.cpp
    @author Kaito Miyamoto
    @version July 28, 2023
*/
#include <string>
#include <stdexcept>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h32.h"
///////// Add your code here ///////////////
Circle::Circle(double radius, double x, double y)
    : Point(x, y), m_radius(radius)
{
}
double Circle::getRadius() const
{
    return m_radius;
}
double Circle::getArea() const
{
    return kPi * m_radius * m_radius;
}
double Circle::getCircumference() const
{
    return 2 * kPi * m_radius;
}
string Circle::toString(int decimals) const
{
    stringstream out;
    out << "Circle(radius=" << fixed << setprecision(decimals) << m_radius
            << ", center=" << Point::toString(decimals) << ")";
    return out.str();
}

Cylinder::Cylinder(double height, double radius, double x, double y)
    : Circle(radius, x, y), m_height(height)
{
}
double Cylinder::getHeight() const
{
    return m_height;
}
double Cylinder::getVolume() const
{
    return kPi * getRadius() * getRadius() * m_height;
}
double Cylinder::getArea() const
{
    return 2 * kPi * getRadius() * (getRadius() + m_height);
}
string Cylinder::toString(int decimals) const
{
    stringstream out;
    out << "Cylinder(height=" << fixed << setprecision(decimals) << m_height
            << ", base=" << Circle::toString(decimals) << ")";
    return out.str();
}

//////////////// Student Tests ////////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}
