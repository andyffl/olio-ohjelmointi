#include "funktio.h"
#include <iostream>
#include <iomanip>

using namespace std;

void calcSum(int a, int b) {
    int summa = a + b;
    cout << "Lukujen summa on: " << summa << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Error: nollalla ei voi jakaa." << endl;
    } else {
        double osamaara = static_cast<double>(a) / b;
        cout << "Lukujen osamäärä on: " << fixed << setprecision(2) << osamaara << endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        cout << "Error: nollalla ei voi jakaa." << endl;
        return 0.0f;
    }
    return static_cast<float>(a) / b;
}
