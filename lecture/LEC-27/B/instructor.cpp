// Implement instructor here
#include "instructor.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Instructor::Instructor(const string& nm, const string& bday, double sal)
    : Person(nm, bday)
{
    m_salary = sal;
}

void Instructor::setSalary(double newSalary)
{
    m_salary = newSalary;
}

void Instructor::print() const
{
    Person::print();
    cout << fixed << setprecision(2);
    cout << "    (Instructor), Salary: $" << m_salary << endl;
}