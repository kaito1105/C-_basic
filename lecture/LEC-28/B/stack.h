#ifndef STACK_H
#define STACK_H
#include <stack>
#include <vector>


//using Stack = std::stack<double>;

// Exercise 1 - Use public inheritance to
//              derive Stack from vector
// class Stack : public std::vector<double>
// {
// public:
//     double top() const { return back(); }
//     void pop() { pop_back(); }
//     void push(double n) { push_back(n); }
// };

// Exercise 2 - Use composition (layering) to
//              implement Stack in terms of vector
// class Stack
// {
// public:
//     double top() const { return v.back(); }
//     void pop() { v.pop_back(); }
//     void push(double n) { v.push_back(n); }
//     bool empty() const { return v.empty(); }
//     size_t size() const { return v.size(); }
// private:
//     std::vector<double> v;
// };

// Exercise 3 - Use private inheritance to
//              implement Stack in terms of vector
class Stack : private std::vector<double>
{
public:
    using vector::size;
    using vector::push_back;
    using vector::back;
    using vector::pop_back;
    double top() const { return back(); }
    void pop() { pop_back(); }
    void push(double n) { push_back(n); }
};


#endif
