#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

Student::Student(){
    nume = new char[1];
    *nume=0;
}

Student::Student( char * n){
    nume = new char[strlen(n)+1];
    strcpy(nume,n);
}

char* Student::toString(){
    char * class_string = new char[20];
    sprintf(class_string, "Nume: %s", this->nume);
    return class_string;
}

Student::~Student(){
    delete [] nume;
}