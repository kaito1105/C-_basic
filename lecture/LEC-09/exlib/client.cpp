/**
 *  @author Stephen Gilbert
 *  @date CS 150 Testing Template
 */
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

#include "cs150check.h"

///////////// Add header for function being tested
#include "extreme.h"

//////////// Add your student ID here
string STUDENT = "kmiyamoto5";

const double kEpsilon = 1.0e-14;
void runTests()
{
	srand(time(0));

	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for function //////////////////////
	beginFunctionTest("max"); // Test title

    assertDoubleEquals(1.1, ex::max(1.1, 1.01, 1.011), kEpsilon); // double
    assertDoubleEquals(1.1, ex::max(1.011, 1.1, 1.01), kEpsilon); // double
    assertDoubleEquals(1.1, ex::max(1.011, 1.01, 1.1), kEpsilon); // double

    endFunctionTest(); // end

    beginFunctionTest("min"); // Test title

    assertDoubleEquals(1.01, ex::min(1.1, 1.01, 1.011), kEpsilon); // double
    assertDoubleEquals(1.01, ex::min(1.1, 1.011, 1.01), kEpsilon); // double
    assertDoubleEquals(1.01, ex::min(1.01, 1.011, 1.1), kEpsilon); // double

    endFunctionTest(); // end


    ///////// End all test runs /////////////////////////
    endTests();
}

//////////// Student tests or run
int run()
{
    // Add code you want to display here
    return 0;
}