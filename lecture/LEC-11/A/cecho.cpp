// Write a simple filter program here
#include <iostream>
using namespace std;

int main()
{
    bool printing = false;
    char ch;
    char prev = 0;
    while (cin.get(ch))
    {
        if (prev == '\n' && ch == 'C' && cin.peek() == 'H')
        {
            printing = true;
        }
        if (printing) cout.put(ch);
        if (ch == '\n') { printing = false; }
        prev = ch;
    }
}
