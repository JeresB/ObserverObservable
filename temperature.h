#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <observable.h>

class Temperature : public Observable
{
public:
    Temperature(int initialValue);
    int getValue();
    void changeValue(int newValue);

private:
    int value;
};

#endif // TEMPERATURE_H
