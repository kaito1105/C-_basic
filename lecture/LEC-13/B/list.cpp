//SOLUTION
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;

string STUDENT = "kmiyamoto5";

bool list(const string& args)
{
   // Add your code here
   istringstream strIn(args);
   string fname;
   strIn >> fname;
   int starting, ending;
   strIn >> starting >> ending;

   ifstream in(fname);
   if (in.fail())
   {
        cerr << "Cannot open " << fname << endl;
        return false;
   }

   if (starting > ending)
   {
        cerr << "Invalid start or end position: " << args << endl;
        return false;
   }

   int lineNo = 0;
   string line;
   while (getline(in, line) && lineNo < ending)
   {
        lineNo++;
        if (lineNo >= starting)
        {
            cout << setw(4) << lineNo << ". " << line << endl;
        }
   }
   return true;
}

/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
