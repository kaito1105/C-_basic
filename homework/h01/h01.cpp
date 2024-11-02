/**
 *  @author Kaito Miyamoto
 *  @date June 14, 2023
 *  @file h01.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "kmiyamoto5";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here
    // 1. Title and introduction
    //     - blank line
    // 2. Input section: prompt and input on same line
    // 3. Processing section - compute the results
    //     - blank line
    // 4. Output section: test data inside brackets []

    // Input: the time (timehours, timeMinutes)
    //        the duration (durationHours, durationMinutes)
    // Output: before, after
    // Algorithms: time <- timeHours * 60 + timeMinutes
    //             duration <- durationHours * 60 + durationMinutes
    //             after <- time + duration
    //             before <- tiem - duration
    //             afterHours <- after / 60
    //             afterMinutes <- after % 60
    //             beforeHours <- before / 60
    //             beforeMinutes <- before % 60


    // Write your code here
    cout << STUDENT << "-" << ASSIGNMENT << ": ";
    cout << "Time on My Hands" << endl;
    cout << string(50, '-') << endl;
    cout << "Give me a time (such as 3:57) and a duration" << endl;
    cout << "(such as 1:05), and I'll tell you the sum" << endl;
    cout << "(taht is, the time that follows the given time" << endl;
    cout << "by the given duration), and difference (the time that" << endl;
    cout << "precedes the given time by hat duration)." << endl;
    cout << endl;

    // Input:
    char discard;
    cout << "        Time: ";
    int timeHours;
    int timeMinutes;
    cin >> timeHours >> discard >> timeMinutes;

    cout << "        Duration: ";
    int durationHours;
    int durationMinutes;
    cin >> durationHours >> discard >> durationMinutes;

        // Another way
        // cout << "    Time: ";
        // cin >> timeHours;
        // cin.get();
        // cin >> timeMinutes;

        // cout << "     Duration: ";
        // cin >> durationHours;
        // cin.get();
        // cin >> durationMinutes;

    // Processing:
    int time = timeHours * 60 + timeMinutes;
    int duration = durationHours * 60 + durationMinutes;
    int after = time + duration;
    int before = time - duration + 1440;
    int afterHours = after / 60 % 12;
    int afterMinutes = after % 60;
    int beforeHours = before / 60 % 12;
    int beforeMinutes = before % 60;
    afterHours = (afterHours + 11) % 12 + 1;
    beforeHours = (beforeHours + 11) % 12 + 1;

    // Output:
    cout << endl;
    cout << setfill('0');
    cout << durationHours << ":" << setw(2) << durationMinutes
        << " hours after, and before, "
        << timeHours << ":" << timeMinutes << " is ["
        << afterHours << ":" << setw(2) << afterMinutes
        << ", "
        << beforeHours << ":" << setw(2) << beforeMinutes
        << "]" << endl;

    return 0;
}
