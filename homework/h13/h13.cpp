/**
 *  @author Kaito Miyamoto
 *  @date Summer 2023
 *  @file h13.cpp
 */
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

#include "h13.h"

// Write your function here
std::string dataSets(const std::string& fileName)
{
    ifstream in(fileName);
    if (in.fail())
    {
        return fileName + " cannot be opened.";
    }

    int dataSet = 0;
    int repeat;
    ostringstream out;
    while (!in.fail())
    {
        double sum = 0.0;
        int count = 0;
        in >> repeat;
        if(in.fail())
        {
            break;
        }
        while(repeat != 0)
        {
            double value;
            in >> value;
            count += repeat;
            sum += repeat * value;
            in >> repeat;
        }

        dataSet++;

        if (dataSet > 1)
        {
            out << "\n";
        }
        out << "data set " << dataSet << ": total values = " << count << "\n"
            << "average value = " << fixed << setprecision(4) << sum / count << "\n";
    }
    return out.str();
}



///////////////// Student Testing /////////////////////////
int run()
{
    cout << "Student tests" << endl;
    return 0;
}
