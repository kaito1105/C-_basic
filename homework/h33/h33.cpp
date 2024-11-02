/**
    @file h33.cpp
    @author Kaito Miyamoto
    @version July 28, 2023
*/
#include <string>
#include <stdexcept>
#include <iomanip>
#include <sstream>
using namespace std;

#include "h33.h"

string STUDENT = "kmiyamoto5"; // Add your Canvas/occ-email ID

// Add your implementation here
Worker::Worker(const std::string& name, double rate)
    : m_name(name), m_rate(rate)
{
}
double Worker::getRate() const
{
    return m_rate;
}
string Worker::getName() const
{
    return m_name;
}

SalariedWorker::SalariedWorker(const std::string& name, double rate)
    : Worker(name, rate)
{
}
string SalariedWorker::payInfo(int hours) const
{
    double total = getRate() * 40;
    stringstream out;
    out << getName() << "(Salaried, $ " << fixed << setprecision(2) << getRate()
            << ") worked " << hours << " hours. Pay: $ " << total;
    return out.str();
}

HourlyWorker::HourlyWorker(const std::string& name, double rate)
    : Worker(name, rate)
{
}
string HourlyWorker::payInfo(int hours) const
{
    double total = 0;
    if (hours <= 40) { total = hours * getRate(); }
    else { total = 40 * getRate() + (hours - 40) * getRate() * 1.5; }
    stringstream out;
    out << getName() << "(Hourly, $ " << fixed << setprecision(2) << getRate()
            << ") worked " << hours << " hours. Pay: $ " << total;
    return out.str();
}
/////////////// Student Tests ////////////////////////////
#include <iostream>
int run()
{
	cout << "Student testing" << endl;
	return 0;
}
