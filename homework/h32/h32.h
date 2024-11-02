/*
 *  h32.h
 *  @author your name goes here
 *  @version your section and day
 *  Point->Circle->Cylinder
 */

#ifndef H32_H_
#define H32_H_

#include "point.h"
#include <cmath>
#include <string>

// Use this for PI
const double kPi = std::acos(-1.0);

//////// Put your class definitions here /////////////////////
// Put Circle first, then Cylinder
class Circle : public Point
{
public:
    Circle(double radius, double x, double y);
    double getRadius() const;
    virtual double getArea() const;
    double getCircumference() const;
    virtual std::string toString(int decimals = 2) const override;

private:
    double m_radius;
};

class Cylinder : public Circle
{
public:
    Cylinder(double height, double radius, double x, double y);
    double getHeight() const;
    double getVolume() const;
    virtual double getArea() const override;
    virtual std::string toString(int decimals = 2) const override;

private:
    double m_height;
};

#endif
