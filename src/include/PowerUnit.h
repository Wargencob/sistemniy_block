#include "Component.h"

#ifndef POWERUNIT_H
#define POWERUNIT_H

class PowerUnit : public Component{
private:
    std::string name;
    int voltage;
public:
    PowerUnit();
    PowerUnit(std::string name, int voltage);
    PowerUnit(const PowerUnit& powerUnit);
    ~PowerUnit() { std::cout << "PowerUnit destructed" << std::endl; }

    void doJob() override;

    friend std::ostream& operator<<(std::ostream& os, const PowerUnit* powerUnit);
};

#endif // POWERUNIT_H
