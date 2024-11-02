#include <vector>
#include <string>
using namespace std;

string STUDENT = "kmiyamoto5"; // Your Canvas ID goes here

/**
 * Write the function unique.
 * @param v a vector<int> (not changed)
 * @return a vector<int> containing unique elements
 * v is not required to be sorted
 */
vector<int> unique(const vector<int>& v)
{
    vector<int> result;
    for (auto e1 : v)
    {
        bool add = true;
        for (auto e2 : result)
        {
            if (e1 == e2)
            {
                add = false;
                break;
            }
        }
        if (add)
        {
            result.push_back(e1);
        }
    }
    return result;
}



/////////////// STUDENT TESTING ////////////////////
#include <iostream>
using namespace std;
int run()
{
    cout << "Student testing" << endl;

    return 0;
}