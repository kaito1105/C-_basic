/**
 *  @author Kaito Miyamoto
 *  @date July 21, 2023
 *  @file h29.h
 */
#ifndef H29_H
#define H29_H
#include <iostream>
/** Prints [Input failed] and returns -1. */
int die();

/** Prints the heading for this assignment */
void printHeading();

// Add your user-defined type definition here
struct Time
{
    int hours;
    int minutes;

    std::istream& read(std::istream& in);
    std::ostream& print(std::ostream& out) const;
    Time sum(const Time& other) const;
    Time difference(const Time& other) const;
};

#endif
