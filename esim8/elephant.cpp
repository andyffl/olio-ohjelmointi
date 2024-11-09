#include "elephant.h"

string Elephant::getZooname() const
{
    return zooname;
}

void Elephant::setZooname(const string &newZooname)
{
    zooname = newZooname;
}

Elephant::Elephant() {
    cout<<"Elephant luokan olio luotiin"<<endl;
}
