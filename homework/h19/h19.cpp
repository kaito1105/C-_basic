/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h19.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h19.h"

// Implement your function here
std::vector<std::string> fileToWords(const std::string& filename)
{
    ifstream in(filename);
    if (!in)
    {
        throw invalid_argument("Error");
    }
    vector<string> results;
    string word;
    while (getline(in, word))
    {
        results.push_back(word);
    }
    return results;
}


/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    // auto v = fileToWords("excluded.txt");
    // cout << "Excluded words:" << endl;
    // for (auto e : v) cout << " -" << e << endl;
    return 0;
}
