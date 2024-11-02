#include <iostream>
#include <fstream>
#include <string>

using namespace std;
string STUDENT = "kmiyamoto5";  // Add your Canvas login name

#include "fliplines.h"

// place your code here
void flipLines(const string& fname)
{
    // ifstream in;
    // in.open(fname);
    ifstream in(fname);
    if (in.fail())
    {
        cerr << "Cannot open " << fname << endl;
        // return
    }
    string line1, line2;
    while (getline(in, line1))
    {
        if (getline(in, line2))
        {
            cout << line2 << endl << line1 << endl;
        }
        else
        {
            cout << line1 << endl;
        }
    }
}




/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
