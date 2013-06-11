#include "subjectimplementation.h"
#include <algorithm>

SubjectImplementation::SubjectImplementation(std::string name)
{
    this->name = name;
    this->lastAction = "none";
}

void SubjectImplementation::registerObserver(Observer* observer){
    observers.push_back(observer);
}

void SubjectImplementation::unregisterObserver(Observer* observer) {
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void SubjectImplementation::notifyObservers() {
    for(std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); ++it) {
        (*it)->update(lastAction);
    }
}

void SubjectImplementation::doAction(std::string action){
    lastAction = action;
    notifyObservers();
}
