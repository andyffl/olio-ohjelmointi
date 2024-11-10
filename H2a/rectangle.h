#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<iostream>

using namespace std;

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();
    double getArea() const;
    double getCircum() const;
    void setWidth(double newWidth);
    void setHeight(double newHeight);
    void printRect();
};

#endif // RECTANGLE_H
