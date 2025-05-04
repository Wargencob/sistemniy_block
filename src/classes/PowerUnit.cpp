#include "../include/PowerUnit.h"
#include <iostream>

PowerUnit::PowerUnit(std::string name, int voltage):
    name(name), voltage(voltage) {}

void PowerUnit::Info() {
    std::cout << "Power Unit name: " << name << ", voltage:" << voltage << std::endl;
}

