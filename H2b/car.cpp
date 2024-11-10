#include "car.h"

Car::Car(const string& brand, const string& model, int yearModel)
    : brand(brand), model(model), yearModel(yearModel) {}

void Car::printData() const
{
    cout << "-------------------------------------------------------" << endl;
    cout << "Merkki: " << brand << ", Malli: " << model << ", Vuosi: " << yearModel << endl;
    cout << "-------------------------------------------------------" << endl;
}
