#ifndef OBSERVERIMPLEMENTATION_H
#define OBSERVERIMPLEMENTATION_H

#include "observer.h"

class ObserverImplementation : public Observer
{
private:
    std::string name;

public:
    ObserverImplementation(std::string name);
    virtual void update(std::string value);
};

#endif
