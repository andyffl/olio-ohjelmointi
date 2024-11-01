#include <iostream>
#include "funktio.h"
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    cout << "Anna eka luku: ";
    cin >> a;

    cout << "Anna toka luku: ";
    cin >> b;

    cout << "Annoit luvut " << a << " ja " << b << endl;

    calcSum(a, b);
    calcDiv(a, b);

    int summa = retSum(a, b);
    float osamaara = retDiv(a, b);

    cout << "Palautettu summa on: " << summa << endl;
    cout << "Palautettu osamäärä on: " << fixed << setprecision(2) << osamaara << endl;

    return 0;
}
