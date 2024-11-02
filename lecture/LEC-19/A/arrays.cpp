 /** CS 150 - Example.
 * Creating and using arrays.
 */
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    const int kIsize = 3;
    int ia[kIsize]; // uninitialized
    char ca[] = {'c', 'a', 't', '\0'};
    long la[5] = {10, 20, 30};
    float fa[6] = {1.1F, 1.2F, 1.3F, 1.4F, 1.5F, 1.6F};
    double da[7]{}; // c++11

    // 1. Print using the array name
    cout << "ia->" << ia << endl;
    cout << "ca->" << static_cast<void*>(ca) << endl;
    cout << "la->" << la << endl;
    cout << "fa->" << fa << endl;
    cout << "da->" << da << endl;

    // ostream& operator<<(ostream& out, const char * cs);

    // 3. write outside the bounds of some arrays
    fa[-2] = 3;
    la[8] = 15;

    // 2. Print the array contents
    // 2a. Use a traditional loop with size
    cout << "ia = [ ";
    for (int i = 0; i < kIsize; ++i)
    {
        cout << ia[i] << " ";
    }
    cout << "]" << endl;

    // 2b. Use a sentinel
    cout << "ca = [";
    for (int i = 0; ca[i] != '\0'; i++)
    {
        if (i > 0) cout << ", ";
        cout << "'" << ca[i] << "'";
    }
    cout << "]" << endl;

    // 2c. Use a pointer to the end
    cout << "la = [" << la[0];
    auto endp = la + sizeof(la) / sizeof(la[0]);
    for (long * p = la + 1; p < endp; p++)
    {
        cout << ", " << *p;
    }
    cout << "]" << endl;

    // 2d. Use begin, end
    cout << "fa = [" << *begin(fa);
    for (auto iter = begin(fa) + 1; iter != end(fa); ++iter)
    {
        cout << ", " << *iter;
    }
    cout << "]" << endl;

    // 2e. the range for loop
    cout << "da = [" << da[0];
    bool printing =false;
    for (auto e : da)
    {
        if (printing)
        {
            cout << ", " << e;
        }
        printing = true;
    }
    cout << "]" << endl;
}