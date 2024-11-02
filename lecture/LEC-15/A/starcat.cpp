#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas id here.

#include "stars.h"
void starcat(const string& catName)
{
    // Open the star catalog
    ifstream in(catName);
    // If you can't open, then print an error message and exit
    if (in.fail())
    {
        cerr << "Cannto open " << catName << endl;
        return;
    }
    double x, y, z, magnitude;
    int draper, harvard;
    // Read the file and
    Star s;
    while (in >> s.x >> s.y >> s.z >> s.draper >> s.magnitude >> s.harvard)
    {
        string rest;
        s.name1 = s.name2 = "";
        getline(in, rest);
        if (! rest.empty())
        {
            string name1, name2;
            size_t pos = rest.find(';');
            if (pos == string::npos)
            {
                s.name1 = rest.substr(1);
            }
            else
            {
                s.name1 = rest.substr(1, pos - 1);
                s.name2 = rest.substr(pos + 2);
            }
            //  -- Print only the named stars
            //  -- primary-name, (x, y), magnitude
            cout << s.name1 << ", (" << s.x << ", "
                << s.y << "), " << s.magnitude << endl;
        }
    }
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    starcat("stars.txt");

    return 0;
}
