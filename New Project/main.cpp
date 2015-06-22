#include "Student.h"
#include <iostream>

using namespace std;

int main (){
    Student *studentul_a = new Student((char*)"Adela");
    char * nume_stud = studentul_a->toString();
    cout << nume_stud << endl;
    delete studentul_a;
    return 0;
}