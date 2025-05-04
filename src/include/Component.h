#include <iostream>

#ifndef COMPONENT_H
#define COMPONENT_H

class Component {
public: virtual void Info() = 0;
    virtual ~Component() {std::cout << "Component destructed";}
};

#endif // COMPONENT_H
