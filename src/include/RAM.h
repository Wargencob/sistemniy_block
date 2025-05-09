#include "Component.h"

#ifndef RAM_H
#define RAM_H

class RAM: public Component{
private:
    std::string name;
    int size;
public:
    RAM(std::string name, int size);
    ~RAM() { std::cout << "RAM destructed" << std::endl; }
    void Info() override;
};

#endif // RAM_H
