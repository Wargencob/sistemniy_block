#include "../include/PowerUnit.h"

PowerUnit::PowerUnit(std::string _name, int _voltage):
    name(_name), voltage(_voltage) {}
PowerUnit::PowerUnit(const PowerUnit& powerUnit):
    name(powerUnit.name), voltage(powerUnit.voltage) {}

void PowerUnit::doJob()
{
    std::cout << "БП подал питание" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const PowerUnit* powerUnit){
    os << "1 | Название БП: " << powerUnit->name << std::endl;
    os << "2 | Вольтаж: " << powerUnit->voltage << std::endl;
    return os;
}
