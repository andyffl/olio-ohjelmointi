#include "firstclass.h"

FirstClass::FirstClass(QObject *parent)
    : QObject{parent}
{
    qDebug()<<"FirstClass olio luotiin";
    // luodaan SecondClass luokka olio objSecondClass
    // asetetaan nykyinen olio objSecondClass olion parentiksi
    // objSecondClass tuhoutuu, kun nykyinen olio tuhoutuu
    objSecondClass=new SecondClass(this);
}

FirstClass::~FirstClass()
{
    qDebug()<<"FirstClass olio tuhottiin";
}
