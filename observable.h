#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <vector>
#include "observer.h"

using namespace std;

class Observable
{
public:
    void addObserver(Observer* observer);
    void notifyObservers();

private:
    vector<Observer*> observers;
};

#endif // OBSERVABLE_H
