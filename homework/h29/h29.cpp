/**
 *  @author Kaito Miyamoto
 *  @date July 21, 2023
 *  @file h29.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "h29.h"

string STUDENT = "kmiyamoto5";  // Add your Canvas login name
extern string ASSIGNMENT;

// Implement your member functions here
istream& Time::read(istream& in)
{
    char ch;
    in >> hours >> ch >> minutes;
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59)
    {
        in.setstate(ios::failbit);
    }
    return in;
}

ostream& Time::print(ostream& out) const
{
    out << setfill('0') << hours << ":" << setw(2) << minutes;
    return out;
}

Time Time::sum(const Time& other) const
{
    int totalMinutes = hours * 60 + minutes + other.hours * 60 + other.minutes;
    int hoursAfter = totalMinutes / 60 % 12;
    int minutesAfter = totalMinutes % 60;
    hoursAfter = (hoursAfter + 11) % 12 + 1;
    minutesAfter = (minutesAfter + 59) % 60 + 1;
    return Time{hoursAfter, minutesAfter};
}

Time Time::difference(const Time& other) const
{
    int totalMinutes = hours * 60 + minutes - (other.hours * 60 + other.minutes) + 1440;
    int hoursBefore = totalMinutes / 60 % 12;
    int minutesBefore = totalMinutes % 60;
    hoursBefore = (hoursBefore + 11) % 12 + 1;
    minutesBefore = (minutesBefore + 59) % 60 + 1;
    return Time{hoursBefore, minutesBefore};
}

// Predefined functions for this assignment
int run()
{
    printHeading();

    Time startTime;
    Time duration;

    // Input section
    cout << "    Time: ";
    if (! startTime.read(cin)) { return die(); }
    cout << "    Duration: ";
    if (! duration.read(cin)) { return die(); }

    // Processing section
    Time after = startTime.sum(duration);
    Time before = startTime.difference(duration);

    // Output section
    cout << endl;
    duration.print(cout) << " hours after, and before, ";
    startTime.print(cout) << " is [";
    after.print(cout) << ", ";
    before.print(cout) << "]" << endl;

    return 0;
}

void printHeading()
{
    cout << "-" << STUDENT << ASSIGNMENT << ": Time and Again" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Give me a time (such as 3:57) and a duration\n"
        << "(such as 1:05), and I'll tell you the sum\n"
        << "(that is, the time that follows the given time\n"
        << "by the given duration), and difference (the time that\n"
        << "precedes the given time by that duration)." << endl;
    cout << endl;
}

int die()
{
    cout << "[Failed Input]" << endl;
    cout.flush();
    return -1;
}
