#include <string>
std::string ASSIGNMENT = "Recursion-Change X to Y";
using namespace std;
/**
    Write the function changeXtoY.

    Given a string, compute recursively
    (no loops) a new string where all the
    lowercase 'x' chars have been changed to 'y'

        changeXtoY("codex") returns "codey"
        changeXtoY("xxhixx") returns "yyhiyy"
        changeXtoY("xhixhix") returns "yhiyhiy"
*/
//////////// ADD YOUR CODE HERE /////////////////////
string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

string changeXtoY(const string& str)
{
    if (str.size() < 1) return str;
    string front = str.substr(0, 1);
    if (front == "x") front = "y";
    return front + changeXtoY(str.substr(1));
}


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
