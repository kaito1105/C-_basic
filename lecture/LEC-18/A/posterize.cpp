/**
 *  @author Kaito Miyamoto
 *  @date July 13, 2023
 *  @file posterize.cpp
 */
#include <string>
#include <iostream>
using namespace std;

#define STB_IMAGE_IMPLEMENTATION        // REQUIRED (loading)
#define STB_IMAGE_WRITE_IMPLEMENTATION  // (writing)
#include "stb_image.h"                  // "header-only" C libraries
#include "stb_image_write.h"            // writing files

// Place your poster() function here
void poster(unsigned char& c)
{
    if (c < 64) c = 31;
    else if (c < 128) c = 95;
    else if (c < 192) c = 159;
    else c = 223;
}

int main()
{
    // 1. Ask the user for the file to open
    //      Use cout, and getline with cin
    cout << "File to open: ";
    string fname;
    cin >> fname;

    // 2. Load the image into memory
    //      Add "images/" to file name to look for file
    string path = "images/" + fname;
    //      Creating variables for width, height, and bpp
    int width, height, bpp, channels = 4;
    //      Call stbi_load(). Use c_str() on filename
    //      Save returned value in unsigned char * pointer
    unsigned char * const data = stbi_load(path.c_str(), &width, &height, &bpp, channels);

    // 3. Print an error and exit if you can't open it
    //      Check for nullptr and return
    if (data == nullptr)
    {
        cerr << "Cannot open " << path << endl;
        return -1;
    }

    // 4. Create an unsigned char pointer to beginning of the image
    //      Use address arithmetic to create a pointer to the end
    //      Use an iterator loop to process each byte
    //      Remember that bytes are RGBA
    //      Increment the pointer to go to the next component
    unsigned char *beg = data;
    unsigned char *end = beg + width * height * channels;
    while (beg != end)
    {
        // red
        poster(*beg);
        beg++;
        // green
        poster(*beg);
        beg++;
        // blue
        poster(*beg);
        beg++;
        // alpha
        beg++;
    }

    // 5. Posterize the image
    //      Write a poster() function that takes an unsigned char&
    //      Make your own rule (example): < 64->31, < 128->95, < 192->159, 223
    //      Alternative rule: average 3 colors then set only one color per pixel (5 total)
    //      Make sure you skip the alpha component

    // 6. Save it under a new name.
    const char * filename = "images/posterized.png";
    // int stbi_write_png(char const *filename, int w, int h, int comp, const void *data, int stride_in_bytes);
    string modified_file = "images/posterized-" + fname;
    if (stbi_write_png(modified_file.c_str(), width, height, channels, data, width * channels))
        cout << "Saved modification in " << modified_file << endl;
    else
        cerr << "Could not write data in " << modified_file << endl;

    // 7. Free the original memory
    stbi_image_free(data);

    return 0;
}
