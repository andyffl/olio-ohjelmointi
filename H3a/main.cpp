#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    ItalianChef chef2("Anthony Bourdain");
    chef2.makeSalad();
    chef2.makeSoup();
    chef2.makePasta();
    cout << "Italian Chef nimi on: " << chef2.getName() << endl;

    return 0;
}
