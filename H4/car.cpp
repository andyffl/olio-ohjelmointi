#include "car.h"

Car::Car(string mdl, string brd) : model(mdl), brand(brd) {}

void Car::setEngine(int horsepower, double displacement) {
    objEngine.setHorsepower(horsepower);
    objEngine.setDisplacement(displacement);
}

void Car::setWheels(int size, string type) {
    objWheel1.setSize(size);
    objWheel1.setType(type);

    objWheel2.setSize(size);
    objWheel2.setType(type);

    objWheel3.setSize(size);
    objWheel3.setType(type);

    objWheel4.setSize(size);
    objWheel4.setType(type);
}

string Car::getModel() const {
    return model;
}

void Car::setModel(const string &newModel) {
    model = newModel;
}

string Car::getBrand() const {
    return brand;
}

void Car::setBrand(const string &newBrand) {
    brand = newBrand;
}

void Car::printDetails() const {
    cout << "Auto: " << brand << " " << model<<endl;
    cout<<"Moottori: "<<objEngine.getHorsepower()<<" hp, "<<objEngine.getDisplacement()<<" L"<<endl;
    cout << "Rengas 1:"<<objWheel1.getSize()<<" tuumaa, "<<objWheel1.getType()<<endl;
    cout << "Rengas 2:"<<objWheel2.getSize()<<" tuumaa, "<<objWheel2.getType()<<endl;
    cout << "Rengas 3:"<<objWheel3.getSize()<<" tuumaa, "<<objWheel3.getType()<<endl;
    cout << "Rengas 4:"<<objWheel4.getSize()<<" tuumaa, "<<objWheel4.getType()<<endl;
}

Car::Car() {}
