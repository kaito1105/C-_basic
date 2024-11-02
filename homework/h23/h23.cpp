/**
 *  @author Kaito Miyamoto
 *  @date July 15, 20023
 *  @file h23.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "kmiyamoto5"; //"WHO AM I?"; // Add your Canvas/occ-email ID

#include "h23.h"

const int BPP = 4;
// Add your code here
void greenScreen(unsigned char * const img, int width, int height)
{
    unsigned char * p = img;
    auto end = img + width * height * BPP;
    while (p != end)
    {
        if (*(p + 1) > 2 * max(*p, *(p + 2)))
        {
            p[0] = 0;
            p[1] = 0;
            p[2] = 0;
            p[3] = 0;
        }
        p += 4;
    }
}

void composite(unsigned char * const bg, unsigned char * const fg, int width, int height)
{
    greenScreen(fg, width, height);
    unsigned char * dest = fg;
    unsigned char * src = bg;
    auto end = dest + width * height * BPP;
    while (dest != end)
    {
        if (dest[3] == 0)
        {
            for (int i = 0; i < BPP; ++i)
            {
                dest[i] = src[i];
            }
        }
        src += 4;
        dest += 4;
    }
}


/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Add your own testing code here

    return 0;
}
