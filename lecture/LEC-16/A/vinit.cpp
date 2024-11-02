/**
    CS 150 - Practice with vectors.
    @author Stephen Gilbert
    @date Fall 2021
*/
#include <iostream>
#include <string>
// include anything?
using namespace std;

#include "cs150check.h"

string STUDENT = "kmiyamoto5"; // Add your Canvas id here.

void runTests()
{
    // Create vectors of short, int, long, float, and
    // double, each containing 5 elements of the Fibonacci sequence.

    // 1. v1 initialized from an array a
    // short, 0, 1, 1, 2, 3
    int a[] = {0, 1, 1, 2, 3};
    vector<short> v1(a, a + 5);

    // 2. v2 initialized using c++ 11 list syntax
    // int, 5, 8, 13, 21, 34
    vector<int> v2{5, 8, 13, 21, 34};

    // 3. v3 as a sized vector, filled with a traditional loop
    // long, 55, 89, 144, 233, 377
    vector<long> v3(5);
    long lt1 = 55, lt2 = 89;
    for (size_t i = 0, len = v3.size(); i < len; ++i)
    {
        v3.at(i) = lt1;
        long temp = lt1;
        lt1 = lt2;
        lt2 += temp;
    }

    // 4. v4 as a sized vector, filled with a range-based loop
    // float, 610, 987, 1597, 2584, 4181
    vector<float> v4(5);
    float ft1 = 610.F, ft2 = 987.F;
    for (auto& e : v4)
    {
        e = ft1;
        auto temp = ft1;
        ft1 = ft2;
        ft2 += temp;
    }

    // 5. v5 as an unsized vector, filled with a while loop
    // double, 6765, 10946, 17711, 28657, 46368
    vector<double> v5;
    double dt1 = 6765.0, dt2 = 10946.0;
    while (v5.size() < 5)
    {
        v5.push_back(dt1);
        auto temp = dt1;
        dt1 = dt2;
        dt2 += temp;
    }

   // LEAVE THIS ALONE
  	beginTests(); // test heading

  	beginFunctionTest("Initialize vectors");
  	assertEqualsMsg("v1 initialized correctly", ans1, v1);
  	assertEqualsMsg("v2 initialized correctly", ans2, v2);
  	assertEqualsMsg("v3 initialized correctly", ans3, v3);
  	assertEqualsMsg("v4 initialized correctly", ans4, v4);
  	assertEqualsMsg("v5 initialized correctly", ans5, v5);

    endFunctionTest(); // end

    endTests();
}

