#include "secondclass.h"

SecondClass::SecondClass(QObject *parent)
    : QObject{parent}
{
    qDebug()<<"SecondClass olio luotiin";
}

SecondClass::~SecondClass()
{
    qDebug()<<"SecondClass olio tuhottiin";
}

