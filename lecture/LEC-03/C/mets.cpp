/**
 *  @author Kaito Miyamoto
 *  @date June 15, 2023
 *  @file mets.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
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
    // Write a program that inputs a subject’s weight in pounds,
    // the number of METS for an activity, and the number of
    // minutes spent on that activity, and then
    // prints out an estimate for the total number of
    // calories burned. One kilogram is equal to 2.2 pounds.
    // Input: weight_in_pounds, mets, minutes
    // Output: calories_burned
    // Given: 1 KG -> 2.2 pounds
    // Given: MET conversion factor is .0175
    // Processing: Calories/ Minute = factor × METS × (Weight in kilograms)

    // Write your code here
    // Input:
    cout << "Your weight in pounds: ";
    double weight_in_pounds;
    cin >> weight_in_pounds;

    cout << "Number of METS for the activity: ";
    double mets;
    cin >> mets;

    cout << "Minutes spent exercising: ";
    int minutes;
    cin >> minutes;

    // Processing:
    const double kFactor = .0175;
    const double kPoundsPerKG = 2.2;
    double weight_in_kg = weight_in_pounds / kPoundsPerKG;
    double calories = kFactor * mets * weight_in_kg * minutes;

    // Output:
    cout << fixed << setprecision(2);
    cout << "You burned an estimated [" << calories << "] calories." << endl;


    return 0;
}
