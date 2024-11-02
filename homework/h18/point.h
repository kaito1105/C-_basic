/**
 * @file point.h
 * @author Stephen Gilbert
 * @version Homework 20 declarations.
 */
#ifndef POINT_H
#define POINT_H
#include <iostream>

struct Point
{
    int x;
    int y;
};

/**
 * Reads a point in the form x,y.
 * @param in the input stream.
 * @param p the Point to populate
 * @return the stream after reading the Point
 */
std::istream& read(std::istream& in, Point& p);

/**
 * Displays a Point in the form (x, y).
 * @param out the stream to write to
 * @param p the Point to write
 * @return the stream after writing the Point
 */
std::ostream& print(std::ostream& out, const Point& p);

/**
 * Calculate the distance between two Points.
 * @param a the first point.
 * @param b the second point.
 * @return the distance as a double.
 */
double distanceBetween(const Point& a, const Point& b);

/**
 * Given two points, find their midpoint.
 * @param a the first point.
 * @param b the second point.
 * @return the midpoint.
 */
Point midpoint(const Point& a, const Point& b);

#endif