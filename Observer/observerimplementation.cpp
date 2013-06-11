#include "observerimplementation.h"

ObserverImplementation::ObserverImplementation(std::string name)
{
    this->name = name;
}

void ObserverImplementation::update(std::string value)
{
    std::cout << "My name is " << this->name
              << " and I saw an action : "<< value
              << std::endl;
}
