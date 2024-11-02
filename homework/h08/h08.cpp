/**
 *  @author Kaito Miyamoto
 *  @date June 22, 2023
 *  @file h08.cpp
 */
#include <string>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h08.h"

// Put your function implementation (definitions) in this file
string digit(int n, const std::string& symbols)
{
	string result;
	if (1 <= n && n <= 3)
	{
		while (n > 0)
		{
			result += symbols.at(0);
			n--;
		}
	}
	else if (n == 4)
	{
		result = symbols.substr(0, 2);
	}
	else if (n == 5)
	{
		result = symbols.at(1);
	}
	else if (6 <= n && n <= 8)
	{
		result = symbols.at(1);
		while (n > 5)
		{
			result += symbols.at(0);
			n--;
		}
	}
	else if (n == 9)
	{
		result = symbols.substr(0, 1) + symbols.substr(2, 1);
	}
	return result;
}

string toRoman(int n)
{
	string onestr;
	string tenstr;
	string hundredstr;
	string thousands;

	if (n > 3999 || n <= 0)
	{
		return "OUT OF RANGE";
	}

	onestr = ones(n % 10);
	n /= 10;

	if (n > 0)
	{
		tenstr = tens(n % 10);
		n /= 10;
	}
	if (n > 0)
	{
		hundredstr = hundreds(n % 10);
		n /= 10;
	}
	if (n > 0)
	{
		while (n > 0)
		{
			thousands += "M";
			n--;
		}
	}
	return thousands + hundredstr + tenstr + onestr;
}



/////////// Student Testing ///////////////////////
#include <iostream>
int run()
{
	cout << "Student Testing" << endl;
	// cout << digit(5, "IVX") << endl; // V
	// cout << digit(3, "XLC") << endl; // XXX
    return 0;
}
