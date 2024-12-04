#ifndef MYSINGLETON_H
#define MYSINGLETON_H
#include <qstring.h>

class MySingleton
{
public:
    MySingleton();

    QString getName() const;
    void setName(const QString &value);

private:
    static MySingleton* instance;
    QString name;
};

#endif // MYSINGLETON_H
