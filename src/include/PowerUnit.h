#include "Component.h"

#ifndef POWERUNIT_H
#define POWERUNIT_H

class PowerUnit : public Component{
private:
    std::string name;
    int voltage;
public:
    PowerUnit(std::string name, int voltage);
    ~PowerUnit() { std::cout << "PowerUnit destructed" << std::endl; }
    void Info() override;
};

#endif // POWERUNIT_H
