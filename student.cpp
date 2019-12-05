#include <iostream>
#include <string>
#include "student.h"

void Student::setName(string firstName,string lastName)
{
        first = firstName;
        last = lastName;

}

string Student::fullName()
{
       string fullName = first + last;
       cout << first << " ";
}
