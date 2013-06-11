#ifndef SUBJECTIMPLEMENTATION_H
#define SUBJECTIMPLEMENTATION_H

#include <subject.h>
#include <observer.h>
#include <vector>

class SubjectImplementation : public Subject
{
private:
    std::vector<Observer*> observers;
    std::string name;
    std::string lastAction;

public:
    SubjectImplementation(std::string name);

    virtual void registerObserver(Observer* observer);
    virtual void unregisterObserver(Observer* observer);
    virtual void notifyObservers();

    void doAction(std::string action);
};

#endif
