#include <iostream>
#include <string>
#include "student.h"

void student::setName(string firstName,string lastName)
{
        first = firstName;
        last = lastName;

}

string student::fullName()
{
       string fullName = first + last;
       cout << first << " ";
}
