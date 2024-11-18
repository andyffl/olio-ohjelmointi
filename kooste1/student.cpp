#include "student.h"

Student::Student() {}

Student::~Student()
{
    cout<<"Student olio tuottiin"<<endl;
}

Student::Student(string n)
{
    this -> name=n;
}

void Student::getData()
{
    cout<<"Opiskelija: "<<name<<endl;
}
