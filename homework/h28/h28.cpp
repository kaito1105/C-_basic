/**
 *  @author Kaito Miyamoto
 *  @date July 21, 2023
 *  @file h28.cpp
 */
#include <string>
#include <iostream>
#include <memory>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h28.h"

// Add your functions here
FlexArray& readData(std::istream& in, FlexArray& a)
{
    size_t m_size = 0;
    size_t capacity = INITIAL_CAPACITY;
    int* m_data = new int[capacity];
    int integers;
    while (in >> integers)
    {
        if (m_size == capacity)
        {
            capacity *= 2;
            int* new_data = new int[capacity];
            for (size_t i = 0; i < m_size; i++)
            {
                new_data[i] = m_data[i];
            }
            delete[] m_data;
            m_data = new_data;
        }
        m_data[m_size] = integers;
        m_size++;
    }
    int* new_data = new int[m_size];
    for (size_t i = 0; i < m_size; i++)
    {
        new_data[i] = m_data[i];
    }
    delete[] m_data;

    a.size_ = m_size;
    a.data_ = std::unique_ptr<int[]>(new_data);
    return a;
}

std::string toString(const FlexArray& a)
{
    string result = "{";
    for (size_t i = 0; i < a.size_; i++)
    {
        if (i > 0)
        {
            result += ", ";
        }
        result += to_string(a.data_[i]);
    }
    result += "}";

    return result;
}


//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
#include <sstream>
int run()
{
    cout << "Add your own tests here" << endl;
    // istringstream in("8 9 Q 4 5");
    // FlexArray a;
    // in >> a;
    // cout << "a->" << a << endl;

    return 0;
}
