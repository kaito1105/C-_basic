/**
 *  @author Kaito Miyamoto
 *  @date CS 150
 *  @file salary-calc.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name
extern string ASSIGNMENT;


/**
 * Calculate wages after a salary increase.
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here
    // Workers at a particular company have won
    // a 7.6% pay increase retroactive for six months.
    // Write a program that takes an employee’s
    // previous annual salary as input and outputs
    // the amount of retroactive pay due the employee,
    // the new annual salary, and the new monthly salary.
    // Use a variable declaration with the modifier
    // const to express the pay increase.

    // Input: annual salalry
    // Output: retroactive pay, new annual and monthly salaries
    // Given: pay increase is 7.6%, retro pay is for 6 months
    // Processing: new annual -> annual salary * (1 + pay increase)
    // Processing: new monthly -> new annual / 12 (months per year)
    // Processing: retro pay -> (new annual - old annual) / 2

    // Write your code here
    // Input
    cout << "Enter current annual salary: ";
    // double annual_salary; // snake case
    double annualSalary; // camel case // (Not AnnualSalary)
    cin >> annualSalary;

    // Processing
    const double kRaisePercent = .076;
    const int kMonthsPerYear = 12;
    double newAnnual = annualSalary * (1 + kRaisePercent);
    double newMonthly = newAnnual / kMonthsPerYear;
    double retroPay = (newAnnual - annualSalary) / 2;

    // Output
    cout << fixed << setprecision(2);
    cout << "New annual, monthly and retroactive salary: ["
        << newAnnual << ", " << newMonthly << ", " << retroPay << "]" << endl;


    return 0;
}
