#include "temperature.h"

Temperature::Temperature(int initialValue) : value(initialValue){}

int Temperature::getValue() {
    return this->value;
}

void Temperature::changeValue(int newValue) {
    this->value = newValue;
    this->notifyObservers();
}
