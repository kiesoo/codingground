#ifndef STUD_H
#define STUD_H

#include <iostream>
#include <cstring>

using namespace std;

class Student {
    char *nume;
    
    public:
        Student();
        Student( char *n );
        char * toString();
        ~Student();
};
		



#endif