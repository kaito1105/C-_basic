// Define the instructor class here
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "person.h"
#include <string>
class Instructor : public Person
{
public:
    Instructor() = default;
    Instructor(const std::string& name, const std::string& bday, double sal);
    void setSalary(double newSalary);
    virtual void print() const;
private:
    double m_salary;
};

#endif