/**
    @file h16.h
    @author Your name
    @data Semester and Section
*/
#ifndef H16_H_
#define H16_H_
#include <string>
#include <sstream>
#include <iomanip>
#include <typeinfo>

// Write your template function, along with the
// conditional compilation here
#if __cplusplus <= 199711L
template <typename T>
std::string to_string(const T& num)
{
    std::ostringstream out;
    out << num;
    return out.str();
}

#endif
#endif
