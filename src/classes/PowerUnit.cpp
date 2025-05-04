#include "../include/PowerUnit.h"
#include <iostream>

PowerUnit::PowerUnit(std::string name, int voltage){
    this->name = name;
    this->voltage = voltage;
}

void PowerUnit::Info() {
    std::cout << "Power Unit name: " << name << ", voltage:" << voltage << std::endl;
}
