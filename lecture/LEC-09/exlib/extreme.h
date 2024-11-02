d/**
 * @file extreme.h
 * @author Kaito Miyamoto
 * @version Summer 2023
 */
#ifndef EXTREME_H
#define EXTREME_h

/**
 * Extreme Values Library.
 */
namespace ex {
    /**
     * Finds smallest of three doubles.
     * @param a the first number
     * @param b the second number
     * @param c the third number
     * @return the smallest of a, b and c.
     */
    double min(double a, double b, double c);

    /**
     * Finds largest of three doubles.
     * @param a the first number
     * @param b the second number
     * @param c the third number
     * @return the largest of a, b and c.
     */
    double max(double a, double b, double c);
}

#endif