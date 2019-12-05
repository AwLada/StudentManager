#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <iostream>
#include <string>

using namespace std;

class Student
{
        private:
                string first;
                string last;

        public:
                void setName (string firstName,string lastName);
                string fullName();
};
#endif
