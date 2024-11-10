#include <iostream>
#include <vector>
#include <car.h>

using namespace std;

int main()
{
    vector<Car> carList;

    Car car1("Citroen", "E-C4", 2022);
    Car car2("Ford", "Focus", 2021);
    Car car3("Tesla", "Model3", 2024);

    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    for (size_t i = 0; i < carList.size(); ++i) {
        carList[i].printData();
    }

    return 0;
}
