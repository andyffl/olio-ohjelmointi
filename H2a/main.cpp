#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Citroen");
    objCar.setModel("E-C4");
    objCar.setYearModel(2022);
    objCar.printData();

    Rectangle *objRect = new Rectangle;
    objRect->setWidth(7);
    objRect->setHeight(5);
    objRect->printRect();
    delete objRect;
    objRect = nullptr;

    unique_ptr<Student> studentPtr = make_unique<Student>();
    studentPtr->setName("Andy");
    studentPtr->setStudentNumber(20094);
    studentPtr->setAverage(4.9);
    studentPtr->printStudent();

    return 0;
}
