#include "users.h"

#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Users *objUsers=new Users;
    objUsers->getUsers(2);
    delete objUsers;
    objUsers=nullptr;
    return a.exec();
}
