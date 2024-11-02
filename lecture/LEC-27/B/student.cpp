// Implement Student here
#include "student.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

Student::Student(const std::string& n, const std::string& bday, const std::string& m)
    :Person(n, bday), m_major(m)
{}
void Student::setMajor(const std::string& newMajor)
{
    m_major = newMajor;
}
void Student::print() const
{
    Person::print();
    cout << "    (Student), Major: " << m_major << endl;
}