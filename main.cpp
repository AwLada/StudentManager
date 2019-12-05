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
   
    cout << lastName << " " << firstName << endl;
    person.setName(firstName,lastName);
    cout<<"Saved " << person.fullName() << endl;
    
    return 0;
}

