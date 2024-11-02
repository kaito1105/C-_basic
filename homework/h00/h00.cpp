/**
 *  @author Kaito Miyamoto
 *  @date June 12, 2023
 *  @file h00.cpp
 */
#include <iostream>
#include <string>
using namespace std;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here
    // Input: boxWeight (weight in onces of a single box of cereal)
    // Output: weight_in_tons (one box), boxes_per_ton
    // Assumption (given): one metric ton is 35,273.92 ounces
    // Algorithms: weight_in_tons <- box_weight / one metric ton
    // Algorithm: boxes_per_ton <- one tone / weight_in_tons

    // Write your code here
    cout << STUDENT << "-" << ASSIGNMENT << ":";
    cout << "Cereal Box Calculator" << endl;
    cout << string(50, '-') << endl;

    // Input:
    cout << "Enter ounces in box of cereal: ";
    double box_weight;
    cin >> box_weight;

    // Processing:
    const double kOuncesPerTon = 35273.92;
    double weight_in_tons = box_weight / kOuncesPerTon;
    double boxes_per_ton = 1.0 / weight_in_tons;

    // Output:
    cout << "Weight in metric tons, boxes per ton: ["
        << weight_in_tons << ", " << boxes_per_ton << "]" << endl;

    return 0;
}

