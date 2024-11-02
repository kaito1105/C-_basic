/**
 * @file algo.h
 * @author Kaito Miyamoto
 * @version June 21, 2023
 */
// Complete the interface file
#ifndef ALGO_H
#define ALGO_H

/**
 * The Ancient Algorithms Library.
*/
namespace aa {

    /**
     * Calculates the greatest common divisor.
     * @param a the first number.
     * @param b the second number.
     * @return the greatest common divisor of a and b.
     * Example:
     * @code{.cpp}
     * double root = aa:sqrt(3.5);
     * @endcode
    */
    int gcd(int a, int b);

    /**
     * Calculates the square root using Newton's method.
     * @param n the number to processs.
     * @return the square root of n.
     * Example:
     * @code{.cpp}
     * int divisor = gcd(12, 90); // divisor -> 6
     * @endcode
    */
    double sqrt(double n);

    /**
     * Calculates abetter approximation for PI than 355/113.
     * @param n the initial numerator.
     * @param d the initial denominator.
     * Example:
     * @code{.cpp}
     * unsigned n = 0, d = 0;
     * pi(n, d); // after, n -> 52143, d -> 16604
     * @endcode
    */
    void pi(unsigned& n, unsigned& d);
}

#endif