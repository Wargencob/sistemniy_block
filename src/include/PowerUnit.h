#include "Component.h"

#ifndef POWERUNIT_H
#define POWERUNIT_H

class PowerUnit : public Component{
private:
    std::string name;
    int voltage;
public:
    PowerUnit(std::string name, int voltage);
    void Info() override;
};

#endif // POWERUNIT_H
