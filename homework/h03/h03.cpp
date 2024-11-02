/**
 *  @author Kaito Miyamoto
 *  @date June 17, 2023
 *  @file h03.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name
extern string ASSIGNMENT;

// Add your function declaration here
string getStatus(double gpa, int credits, int honorsCredits);

/**
 * Describe the purpose of your program here.
 * @return 0 for success.
 */
int run()
{
	// DON'T CHANGE ANYTHING IN THIS FUNCTION

    cout << STUDENT << "-" << ASSIGNMENT << "-Graduation Calculator" << endl;
	cout << "-----------------------------------------" << endl;

	cout << "Enter gpa, total credits and honors credits: ";
	double gpa;
	int credits, honorsCredits;
	cin >> gpa >> credits >> honorsCredits;

	// You will write this function
	string result = getStatus(gpa, credits, honorsCredits);

	cout << "Result is [\"" << result << "\"]" << endl;
	
    return 0;
}

// Implement your function here
string getStatus(double gpa, int credits, int honorsCredits)
{
	string result;
	if (credits >= 180 && gpa >= 2.0)
	{
		result = "graduating";

		if (honorsCredits < 15)
		{
			if (3.6 <= gpa && gpa < 3.8)
			{
				result = "cum laude";
			}
			if (3.8 <= gpa && gpa <= 4.0)
			{
				result = "magna cum laude";
			}
		}
		else
		{
			if (3.6 <= gpa && gpa < 3.8)
			{
				result = "magna cum laude";
			}
			if (3.8 <= gpa && gpa <= 4.0)
			{
				result = "summa cum laude";
			}
		}
	}
	else
	{
		result = "not graduating";
	}
	return result;
}