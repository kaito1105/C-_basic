/**
 * @file h11.cpp
 * @author Kaito Miyamoto
 * @version Summer 2023
 */
#include <string>
#include <iostream>
#include <cctype>
using namespace std;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name

#include "h11.h"

namespace enc {

    // Implement your functions here
    void cipher(istream& in, ostream& out, unsigned key)
    {
        char c;
        while (in.get(c))
        {
            if ('A' <= c && c <= 'Z')
            {
                if (c + key > 'Z')
                {
                    c = '@' + (c + key) % 'Z';
                }
                else c += key;
            }
            if ('a' <= c && c <= 'z')
            {
                if (c + key > 'z')
                {
                    c = '`' + (c + key) % 'z';
                }
                else c += key;
            }
            out << c;
        }
    }

    void plaintext(istream& in, ostream& out, unsigned key)
    {
        char c;
        while (in.get(c))
        {
            if ('A' <= c && c <= 'Z')
            {
                if (c - key < 'A')
                {
                    c = '[' - ('A' - (c - key));
                }
                else c -= key;
            }
            if ('a' <= c && c <= 'z')
            {
                if (c - key < 'a')
                {
                    c = '{' - ('a' - (c - key));
                }
                else c -= key;
            }
            out << c;
        }
    }

}

//////////// Student tests or run
int run()
{
    cout << "Student Testing" << endl;
    return 0;
}
