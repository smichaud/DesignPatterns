#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>

class Observer
{
public:
    virtual void update(std::string value) = 0;
};

#endif
