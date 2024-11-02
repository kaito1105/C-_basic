// Define Student here
#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"
#include <string>
class Student : public Person
{
public:
    Student() = default;
    Student(const std::string& n, const std::string& bday, const std::string& m);
    void print() const override;
    void setMajor(const std::string& newMajor);
private:
    std::string m_major;
};

#endif