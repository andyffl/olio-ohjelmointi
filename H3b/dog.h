#ifndef DOG_H
#define DOG_H
#include "animal.h"
#include <iostream>

using namespace std;

class Dog : public Animal
{
public:
    void callOut() const override;
};

#endif // DOG_H
