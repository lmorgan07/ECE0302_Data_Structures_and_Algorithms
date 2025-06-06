// This is a new Employee_1.cpp
// Note the following items:
// 1. inclusion of header file
// 2. functions are actually generated by clicking the hints in .hpp file

#include "Employee_1.hpp"

// this is the constructor function
Employee::Employee(std::string n, int p, Date d)
{
   name = n; // LHS is attribute, RHS is function args
   hourly_paid = p;
   starting_day = d;
} // as from the name, constructor initializes the object 
// by assigning the args to object's private attributes

// Below is a better way for constructor function: in-line constructor
// Employee::Employee(): name(""), hourly_paid(0), starting_day({1900,1,1})
// {
// }

std::string Employee::get_name() const
{
    return name; // private attribute name can be used since we are now inside Employee class
}

int Employee::get_hourly_rate() const
{
    return hourly_paid; // private attribute hourly_paid can be used, see above
}

Date Employee::get_starting_date() const
{
    return starting_day; // private attribute starting_day can be used, see above
}