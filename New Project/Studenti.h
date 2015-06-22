#ifndef STUD_H
#define STUD_H

#include <iostream>
#include <cstring>

using namespace std;

class Student {
    char *nume;
    
    public:
        Student(){
            nume = new char[1];
            *nume=0;
        }

        Student( char *n ){
            this->nume = new char[strlen(n) + 1];
            strcpy(this->nume, n);
        }

        char * toString(){
            char * class_string = new char[20];
            sprintf(class_string, "Nume: %s", this->nume);
            return class_string;
        }
		



#endif