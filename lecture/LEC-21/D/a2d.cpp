/**
 *  @file a2d.cpp
 *  @author your name
 *  @version section and date
 */
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas id here.

#include "a2d.h"

// Add your function implementations here
double average(const int a[][MAX_COLS], size_t rows, size_t columns)
{
    double sum = 0;
    for (size_t r = 0; r < rows; r++)
    {
        for (size_t c = 0; c < columns; c++)
        {
            sum += a[r][c];
        }
    }
    return sum / (rows * columns);
}

// 2. average takes a 1D array of int, columns
//      Default columns to MAX_COLS
double average(const int a[], size_t columns)
{
    double sum = 0;
    for (size_t i = 0; i < columns; i++)
        sum += a[i];
    return sum / columns;
}

// 3. average takes a 2D array of int, rows, columns and column.
//      No defaults. Average numbers in column
double average(const int a[][MAX_COLS], size_t rows, size_t columns, size_t column)
{
    double sum = 0;
    for (size_t r = 0; r < rows; r++)
        sum += a[r][column];
    return sum / rows;
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}

// I've already completed the aout() function
ostream& aout(ostream& out, const int a[][MAX_COLS], size_t rows, size_t cols)
{
    assert(cols <= MAX_COLS);
    out << "{";
    for (size_t r = 0; r < rows; r++)
    {
        out << "{" << a[r][0];
        for (size_t c = 1; c < cols; c++)
        {
            out << " " << a[r][c];
        }
        out << ((r == rows - 1) ? "}" : "}, ");
    }
    out << "}";
    return out;
}
