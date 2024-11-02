#include "extreme.h"
namespace ex {

    double min(double a, double b, double c)
    {
        double result;
        if (a < b && a < c) result = a;
        else if (b < a && b < c) result = b;
        else result = c;
        return result;
    }

    double max(double a, double b, double c)
    {
        double result;
        if (a > b && a > c) result = a;
        else if (b > a && b > c) result = b;
        else result = c;
        return result;
    }
}