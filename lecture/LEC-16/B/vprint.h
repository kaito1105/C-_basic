#ifndef VPRINT_H
#define VPRINT_H

#include <vector>
#include <iostream>
#include <string>

// put your generic print function here
template <typename T>
void print(std::ostream& out, const std::vector<T>& vec)
{
    out << "[";
    if (vec.size() > 0)
    {
        out << vec.at(0); // vec[0]
        for (size_t i = 1, len = vec.size(); i < len; ++i)
        {
            out << ", " << vec.at(i);
        }
    }
    out << "]";
}

#endif
