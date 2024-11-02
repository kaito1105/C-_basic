#ifndef PROGRAMMER_H
#define PROGRAMMER_H
#include <string>
#include "employee.h"
// Put your definition here
class Programmer : public Employee
{
public:
    Programmer(const std::string& n, double s);
    std::string getName() const override;
};


#endif
