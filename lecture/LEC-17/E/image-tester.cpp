/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file images.cpp
 */
#include <string>
#include <iostream>
using namespace std;

#define STB_IMAGE_IMPLEMENTATION        // REQUIRED (loading)
#define STB_IMAGE_WRITE_IMPLEMENTATION  // (writing)
#include "stb_image.h"                  // "header-only" C libraries
#include "stb_image_write.h"            // writing files

// Place your poster() function here

int main()
{
    string file_path = "images/parrots.png";
    //  1. Load the image into memory
    //      Creating variables for width, height, and bpp
    //      Call stbi_load(). Use c_str() on filename
    //      Save returned value in unsigned char * pointer

    // 2. Print an error and exit if you can't open it
    //      Check for nullptr and return
   
    // 3. Save it under a new name.
    string new_name = "????";
    // int stbi_write_png(char const *filename, int w, int h, int comp, const void *data, int stride_in_bytes);
    // int stbi_write_bmp(char const *filename, int w, int h, int comp, const void *data);
    // int stbi_write_jpg(char const *filename, int w, int h, int comp, const void *data, int quality);

    // 4. Free the original memory

    return 0;
}
