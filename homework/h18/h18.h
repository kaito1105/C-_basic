/**
    @file h18.h
    @author YOUR NAME HERE
    @date what day and meeting time
    Declarations for CS 150 Homework
*/
#ifndef H18_H_
#define H18_H_

#include "point.h"

// Place your Triangle structure definition here
struct Triangle
{
    Point p1;
    Point p2;
    Point p3;
};


/**
 * Calculates the perimeter of the Triangle t.
 * @param t the Triangle to examine.
 * @return the perimeter.
 */
double perimeter(const Triangle& t);

#endif
