// Your implementation goes here
#include "algo.h"
#include <cmath>
using namespace std;

namespace aa {
    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    double sqrt(double n)
    {
        const double kEpsilon = 1.0e-14;
        double new_guess = n / 2;
        double old_guess = new_guess;
        do
        {
            old_guess = new_guess;
            new_guess = ((n / old_guess) + old_guess) / 2;
        }
        while (abs(new_guess - old_guess) >= kEpsilon);
        return new_guess;
    }

    void pi(unsigned& n, unsigned& d)
    {
        const double kTsu = 355.0 / 113.0;
        const double kPi = acos(-1.0); // oracle
        const double kEpsilon = abs(kTsu - kPi);

        double approx = static_cast<double>(n) / d;
        while (abs(approx - kPi) >= kEpsilon)
        {
            if (approx > kPi) { d++; }
            else { n++; }
            approx = static_cast<double>(n) / d;
        }
    }
}