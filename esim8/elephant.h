#ifndef ELEPHANT_H
#define ELEPHANT_H
#include "animal.h"


class Elephant : public Animal
{
private:
    string zooname;
public:
    Elephant();
    string getZooname() const;
    void setZooname(const string &newZooname);
};

#endif // ELEPHANT_H
