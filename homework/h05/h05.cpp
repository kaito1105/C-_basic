/**
 *  @author Kaito Miyamoto
 *  @date June 22, 2023
 *  @file h05.cpp
 */
#include <string>
#include <cctype>
using namespace std;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name

// Add your function here
int sumNums(const string& s)
{
	int sum = 0;
	int num = 0;
	for (size_t i = 0, len = s.size(); i < len; ++i)
	{
		char ch = s.at(i);
		if (isdigit(ch))
		{
			int digit = ch - '0';
			num *= 10;
			num += digit;
		}
		else
		{
			sum += num;
			num = 0;
		}
	}
	sum += num;
	return sum;
}

/////////////// Optional Student Code /////////////////
#include <iostream>
int run()
{
	// Add any code you like here
	// cout << R"(sumNums("abc123xyz")->123? )" << sumNums("abc123xyz") << endl;
	// cout << R"(sumNums("aa11b33")->44? )" << sumNums("aa11b33") << endl;
	// cout << R"(sumNums("7 11")->18? )" << sumNums("7 11") << endl;

   return 0;
}


