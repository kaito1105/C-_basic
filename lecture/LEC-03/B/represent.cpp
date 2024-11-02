#include <iostream>
#include <iomanip>
#include <string>
#include "represent.h"
using namespace std;

int main()
{
    cout << "Representation of values" << endl;
    cout << string(40, '-') << endl;

    // Use the toBits function to convert each value
    // Students should complete
    char a = 'A';
    cout << "The char 'A'..............." << toBits(a) << ", a->" << a << endl;
    unsigned char b = 65;
    cout << "The unsigned char 65......." << toBits(b) << ", b->" << int(b) << endl;
    short c = 32768;
    cout << "The short 32768............" << toBits(c) << ", c->" << c << endl;
    unsigned short d = 32768;
    cout << "The unsigned short 32768..." << toBits(d) << ", d->" << d << endl;
    cout << "The int 15................." << toBits(15) << endl;
    cout << "The int -15................" << toBits(-15) << endl;
    cout << "The float 15F.............." << toBits(15.F) << endl;
    cout << "The double 15.............." << toBits(15.0) << endl;
    cout << "The double -15............." << toBits(-15.0) << endl;

}
