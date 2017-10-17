#include "observable.h"

void Observable::addObserver(Observer *observer){
    this->observers.push_back(observer);
}

void Observable::notifyObservers(){
    for (auto observer : this->observers){
        observer->update();
    }
}
