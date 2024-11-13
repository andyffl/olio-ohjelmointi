#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include<iostream>

using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef(const string &name);
    ~ItalianChef();

    void makePasta();
    string getName()  const;
};

#endif // ITALIANCHEF_H
