#include "student.h"
#include <iostream>

using namespace std;

int main()
{
    Student *objStudent1 = new Student;
    objStudent1 -> setFname("Liisa");
    objStudent1 -> setLname("Joki");
    objStudent1 -> setEmail("liisa.joki@oamk.fi");

    Student *objStudent2 = new Student("Teppo", "Testi", "teppo.testi@oma.com");

    objStudent1 -> studentInfo();
    objStudent2 -> studentInfo();

    delete objStudent1;
    objStudent1 = nullptr;
    delete objStudent2;
    objStudent2 = nullptr;

    return 0;
}
