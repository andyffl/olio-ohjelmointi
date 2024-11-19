#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    Car myCar("Toyota", "Corolla");
    myCar.setEngine(150, 2.0);
    myCar.setWheels(17, "kesarengas");
    myCar.printDetails();

    return 0;
}
