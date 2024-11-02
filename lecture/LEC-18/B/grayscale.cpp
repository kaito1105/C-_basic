/**
 *  @author Kaito Miyamoto
 *  @date July 13, 2023
 *  @file grayscale.cpp
 */
#include <string>
#include <iostream>
using namespace std;

#define STB_IMAGE_IMPLEMENTATION        // REQUIRED (loading)
#define STB_IMAGE_WRITE_IMPLEMENTATION  // (writing)
#include "stb_image.h"                  // "header-only" C libraries
#include "stb_image_write.h"            // writing files


// This is a type alias
using uchar = unsigned char;

// Create a Pixel structure to process the image
struct Pixel { uchar red, green, blue, alpha; };

// Write the average function here
void average(Pixel& p)
{
    int avg = (p.red + p.blue + p.green) / 3;
    p.red = p.green = p.blue = avg;
}

// Write the luminance function here
void luminance(Pixel *p)
{
    int avg = static_cast<int>(p->red * .299 + p->green * .587 + p->blue * .114);
    p->red = p->green = p->blue = avg;
}

int main()
{
    // Loads image into memory
    int w, h, bpp;
    uchar* const data = stbi_load("images/billiards.jpg", &w, &h, &bpp, 4);
    if (data == nullptr)
    {
        cerr << "Cannot load billards.jpg" << endl;
        return -1;
    }

    //  Use renterpret_cast to create a pointer to the beginning
    //  Use address arithmetic to create a pointer to the end
    //  Use an iterator loop to process each pixel
    //  Increment the pointer to go to the next pixel
    // Grayscale the image
    //  Two methods:
    //      1. Write average function(Pixel& p)
    //      2. Use luminance: red (.299), green(.587), blue(.114)
    Pixel *beg = reinterpret_cast<Pixel*>(data);
    Pixel *end = beg + w * h;

    while (beg != end)
    {
        //average(*beg);
        luminance(beg);
        beg++;
    }

    // Save modified image to output
    bool OK = stbi_write_png("images/grayscale.png", w, h, 4, data, w * 4);
    if (OK)
        cout << "Grayscale image in images/grayscale.png" << endl;
    else
        cout << "Could not save image." << endl;

    // Free image data
    stbi_image_free(data);

    return 0;

}
