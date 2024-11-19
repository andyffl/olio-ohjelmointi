#include "wheel.h"

Wheel::Wheel(int sz, string tp) : size(sz), type(tp) {

}

int Wheel::getSize() const {
    return size;
}

string Wheel::getType() const {
    return type;
}

void Wheel::setSize(int newSize) {
    size = newSize;
}

void Wheel::setType(const string &newType) {
    type = newType;
}

Wheel::Wheel() {}
