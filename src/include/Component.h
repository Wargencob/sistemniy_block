#include <iostream>

#ifndef COMPONENT_H
#define COMPONENT_H

class Component {
public:
    virtual void doJob() = 0;
    virtual ~Component() {}
    friend std::ostream& operator<<(std::ostream& os, const Component* component);
};

#endif // COMPONENT_H
