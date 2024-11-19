#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "engine.h"
#include "wheel.h"

using namespace std;

class Car
{
private:
    Engine objEngine;
    Wheel objWheel1, objWheel2, objWheel3, objWheel4;

    string model;
    string brand;
public:
    Car();
    Car(string mdl, string brd);
    void setEngine(int horsepower, double displacement);
    void setWheels(int size, string type);

    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);

    void printDetails() const;
};

#endif // CAR_H
