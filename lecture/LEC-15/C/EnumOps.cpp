/**
 *  @author Kaito Miyamoto
 *  @date July 8, 2023
 *  @file enum.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "enum.h"
// Add your implementation here
std::string to_string(Coin c)
{
    switch (c)
    {
        case Coin::Penny: return "Penny";
        case Coin::Nickel: return "Nickel";
        case Coin::Dime: return "Dime";
        case Coin::Quarter: return "Quarter";
        case Coin::Half: return "Half-Dollar";
        default: return "EROOR";
    }
}
double value_of(Coin c)
{
    return static_cast<int>(c) / 100.0;
}
