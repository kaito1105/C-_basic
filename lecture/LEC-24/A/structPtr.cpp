/**
 *  CS 150 - Pointers, functions and structures
 */
#include <iostream>
#include <string>
#include <memory>
#include <iomanip>
using namespace std;
#include "employee.h"


// Write a function named init which takes a
// pointer to an Employee structure, a constant string&
// and a double, and fills in the structure
void init(Employee *p, const string& name, double salary)
{
    p->name = name;
    p->salary = salary;
}

// Write a function named doubleSalary that takes
// a pointer to an Employee object and that
// doubles that Employee's salary.
void doubleSalary(Employee* p)
{
    p->salary *= 2;
}

int main()
{

    // 1. Create two Employees.
    //    One on the stack, one on the heap.
    Employee stack;
    Employee *heap = new Employee;

    // 2. Pass both to the init() method to initialize them
    init(&stack, "Bob", 1000.00);
    init(heap, "Alice", 1200.00);

    // 3. Print the info about each
    cout << fixed << setprecision(2);
    cout << stack.name << ", $ " << stack.salary << endl;
    cout << heap->name << ", $ " << heap->salary << endl;

    // 4. Double both employee's salaries
    doubleSalary(&stack);
    doubleSalary(heap);

    // 5. Print the info again
    cout << stack.name << ", $ " << stack.salary << endl;
    cout << heap->name << ", $ " << heap->salary << endl;

    // 6. Free any necessary memory
    delete heap;

    return 0;
}






