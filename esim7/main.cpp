#include <iostream>
#include <cat.h>
#include<vector>

using namespace std;

int main()
{
    vector<Cat> catList;
    // Luodaan Cat-luokan olioita
    Cat objCat_1=Cat("Karvinen", "oranssi");
    Cat objCat_2=Cat("Monni", "musta");
    Cat objCat_3=Cat("Miuku", "valkoinen");

    // Lisätään oliot listaan (vektoriin)
    catList.push_back(objCat_1);
    catList.push_back(objCat_2);
    catList.push_back(objCat_3);

    // Tulostetaan listan ensimmäisen kissan tiedot
    catList[0].printData();

    // Tulostetaan kaikkien kissojen tiedot
    cout << "------------------------" << endl;
    cout << "Kaikki kissat:" << endl;
    for (int x = 0; x <= 2; x++) {
        catList[x].printData();
    }

    // for-loop, jos ei tiedetä alkioiden määrää
    cout << "------------------------" << endl;
    cout << "Kaikki kissat, Eri loop:" << endl;
    for (const Cat& cat: catList) {
        cout<<"nimi= "<<cat.getName()<<" vari="<<cat.getColor()<<endl;
    }

    return 0;
}
