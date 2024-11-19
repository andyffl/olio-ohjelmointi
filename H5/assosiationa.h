#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H
#include<iostream>
#include "classb.h"

using namespace std;

class AssosiationA
{
private:
    ClassB objectB;
public:
    AssosiationA(ClassB);
    string getBinfo();
    void setBinfo(string);
};

#endif // ASSOSIATIONA_H
