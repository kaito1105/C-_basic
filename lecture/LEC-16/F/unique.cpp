#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string STUDENT = "kmiyamto5"; // Your Canvas ID goes here

/**
 * Write the function unique which removes all duplicates.
 * @param v a vector<int> (changed)
 * @returns the number of duplicates removed.
 * v is not required to be sorted
 * Keep last (not first) of each element.
 */
int unique(vector<int>& vec)
{
    int dupes = 0;

    auto iter = begin(vec);
    while (iter != end(vec))
    {
        // does the current item appear elsewhiere?
        // yes -> erase it
        // no -> look at the next element
        bool found = false;
        for (auto iter2 = iter + 1; !found && iter2 != end(vec); iter2++)
        {
            if (*iter == *iter2) { found = true; }
        }
        if (found)
        {
            iter = vec.erase(iter);
            dupes++;
        }
        else
        {
            ++iter;
        }

    }

    return dupes;
}



/////////////// STUDENT TESTING ////////////////////
#include <iostream>
using namespace std;
int run()
{
    cout << "Student testing" << endl;

    return 0;
}