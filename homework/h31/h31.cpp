/**
 *  @author Kaito Miyamoto
 *  @date July 28, 2023
 *  @file h31.cpp
 */
#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID
#include "h31.h"

// Add your code here
// Image::Image()
// {
// }
Image::Image(const std::string& path)
{
    load(path);
}
Image::Image(unsigned width, unsigned height)
    : m_width(width), m_height(height), m_pixels(width * height)
{
}

unsigned Image::width() const
{
    return m_width;
}
unsigned Image::height() const
{
    return m_height;
}
unsigned Image::size() const
{
    return m_pixels.size();
}

Pixel* Image::begin()
{
    return m_pixels.empty() ? nullptr : &m_pixels.front();
}
Pixel* Image::end()
{
    return m_pixels.empty() ? nullptr : &m_pixels.back() + 1;
}

void Image::fill(const Pixel& color)
{
    for (auto& pixel : m_pixels)
    {
        pixel = color;
    }
}

bool Image::load(const std::string& path)
{
    int width, height, bpp;
    unsigned char* data = stbi_load(path.c_str(), &width, &height, &bpp, 4);

    if (data != nullptr)
    {
        m_width = static_cast<unsigned>(width);
        m_height = static_cast<unsigned>(height);
        m_pixels.resize(width * height);

        for (unsigned i = 0; i < m_pixels.size(); ++i)
        {
            m_pixels[i].red = data[i * 4];
            m_pixels[i].green = data[i * 4 + 1];
            m_pixels[i].blue = data[i * 4 + 2];
            m_pixels[i].alpha = data[i * 4 + 3];
        }
        stbi_image_free(data);
        return true;
    }
    return false;
}
bool Image::save(const std::string& path)
{
    size_t pos = path.rfind('.');
    string extension;
    if (pos != std::string::npos)
    {
        extension = path.substr(pos + 1);
        for (char& c : extension)
        {
            c = tolower(c);
        }
    }
    if (extension == "png")
    {
        return stbi_write_png(path.c_str(), m_width, m_height, 4,
                reinterpret_cast<const void*>(&m_pixels.front()), 4 * m_width) != 0;
    }
    else if (extension == "bmp")
    {
        return stbi_write_bmp(path.c_str(), m_width, m_height, 4,
                reinterpret_cast<const void*>(&m_pixels.front())) != 0;
    }
    else if (extension == "jpg")
    {
        return stbi_write_jpg(path.c_str(), m_width, m_height, 4,
                reinterpret_cast<const void*>(&m_pixels.front()), 100) != 0;
    }
    return false;
}

//////////////// Student Testing Code //////////////////////
void info(const string& msg, const Image& img);

int run()
{
    //Extra testing code for debugging
    // cout << "Part 1: construct three images" << endl;
    // Image empty;                    // empty image
    // Image square(20, 20);           // square image
    // Image lego("images/lego.png");  //  from file
    // cout << " -- Success" << endl;

    // cout << "\nPart 2: print size, width, height" << endl;
    // info("empty", empty);
    // info("square", square);
    // info("lego", lego);

    // cout << "\nPart 3: Modify some images" << endl;
    // bool ok = empty.load("images/paris.jpg");
    // string msg = "Loading paris into empty image. ";
    // msg += ok ? "Success." : "Failed.";
    // cout << msg << endl;
    // info("empty", empty);

    // Pixel fillColor{255, 127};
    // square.fill(fillColor);

    // cout << "\nPart 4: loop through an image in two ways." << endl;
    // for (auto& p : empty) // grayscale paris
    // {
    //     auto avg = (p.red + p.green + p.blue) / 3;
    //     p.red = p.green = p.blue = avg;
    // }
    // // Use an iterator loop to draw a cross on square
    // int cw = square.width() / 2;
    // int cv = square.size() / 2;
    // int i = 1;
    // for (auto itr = begin(square); itr != end(square); ++itr)
    // {
    //     if (i % cw == 0 || (i > cv - cw && i < cv + cw))
    //         *itr = GRAY;
    //     i++;
    // }

    // cout << "\nPart 5: Save all the pictures." << endl;
    // auto parisOK = empty.save("actual/paris.png");
    // auto squareOK = square.save("actual/square.png");
    // auto legoOK = lego.save("actual/lego.jpg");
    // cout << "paris.png " << (parisOK ? "saved" : "failed") << endl;
    // cout << "square.png " << (squareOK ? "saved" : "failed") << endl;
    // cout << "lego.jpg " << (legoOK ? "saved" : "failed") << endl;

    return 0;
}

void info(const string& msg, const Image& img)
{
    cout << msg << ": size()->" << img.size()
        << ", width()->" << img.width()
        << ", height()->" << img.height() << endl;
}
