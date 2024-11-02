/**
 *  CS 150 - Dynamic Arrays
 */
#include <iostream>
#include <cstdlib>
#include <memory>
using namespace std;

// Use make check to check this

int main()
{

    // 1. Ask the user how big an array to create
    cout << "Number of elements: ";
    int len;
    cin >> len;

    // 2. Create an array of that size
    int * a = new int[len];

    // 3. Ask the user to enter values into each element
    for (int i = 0; i < len; i++)
    {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    // 4. Sum and print
    int sum = 0;
    cout << "a->[";
    if (len > 0)
    {
        sum = a[0];
        cout << a[0];
        for (int i = 1; i < len; ++i)
        {
            cout << ", " << a[i];
            sum += a[i];
        }
    }
    cout << "] = " << sum << endl;

    // 5. Free memory if necessary
    delete[] a;

    return 0;
}






