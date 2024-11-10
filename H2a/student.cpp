#include "student.h"

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

int Student::getStudentNumber() const
{
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

double Student::getAverage() const
{
    return average;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}

void Student::printStudent() const {
    cout << "-----------------------------------------------------" << endl;
    cout << "Nimi: " << getName() << endl;
    cout << "Opiskelijan nro: " << getStudentNumber() << endl;
    cout << "Keskiarvo: " << getAverage() << endl;
    cout << "-----------------------------------------------------" << endl;
}

Student::Student() {}
