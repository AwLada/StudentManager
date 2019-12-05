#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main()
{
    string firstName;
    string lastName;
    int number;
    student person;
    
    cout<<"What is the student's name? ";
    cin>>firstName>>lastName;
    
    person.setName(firstName,lastName);
    cout<<"Saved "<<person.fullName()<<endl;
    
    return 0;
}

#ifndef _STUDENT_H_
#define _STUDENT_H_
class student.h
{
        private:
                string first;
                string last;

        public:
                void person.setName(first, last)
}
#endif
