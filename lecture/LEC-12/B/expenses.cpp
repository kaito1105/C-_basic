#include <iostream>
#include <fstream>
#include <iomanip>
#include <cctype>
#include <string>
using namespace std;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name

void processExpenses(const string& infile, const string& outfile)
{
    // Open the input file
    ifstream in(infile);
    // Print an error message and exit if it can't be found.
    if (in.fail())
    {
        cerr << "Cannot open " << infile << endl;
        return;
    }

    // Create the output file expense-summary.txt
    ofstream out(outfile);
    // Print an error message and exit if it can't be found.
    if (out.fail())
    {
        cerr << "Cannot create " << outfile << endl;
        return;
    }

    // Loop through each character in the file
        // Is the character a NON-digit
        //      Then print it out
        // Otherwise
        //      Create and initialize sum to 0 for the line
        //      Repeat until until in fails or ch == '\n'
        //          If ch is a digit
        //              put it back in the stream
        //              read a number from the stream with >>
        //              add the number to the sum
        //          Read the next character
        //      Print sum with 2 decimals and a newline
    // End of outer loop
    char ch;
    out << fixed << setprecision(2);
    while (in.get(ch))
    {
        if (!isdigit(ch)) out.put(ch);
        else
        {
            double sum = 0;
            while (! in.fail() && ch != '\n')
            {
                if (isdigit(ch))
                {
                    in.putback(ch); // in.unget()
                    double n;
                    in >> n;
                    sum += n;
                }
                in.get(ch);
            }
            out << sum << endl;
        }
    }
}

/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
