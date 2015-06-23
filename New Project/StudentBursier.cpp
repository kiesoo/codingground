#include <iostream>
#include <cstring>
#include <stdio.h>

#include "StudentBursier.h"

using namespace std;

StudentBursier::StudentBursier():Student(){
    this->bursa = 0;
}

StudentBursier::StudentBursier( char *n, int b):Student(n) {
    this->bursa = b;
}

char* StudentBursier::toString(){
    char * sbString = new char [20];
    sprintf(sbString, "Nume: %s, Bursa: %d", nume, bursa);
    return sbString;
}
