#include "../include/RAM.h"

RAM::RAM(std::string _name, int _size):
    name(_name), size(_size) {}
RAM::RAM(const RAM& ram):
    name(ram.name), size(ram.size) {}
void RAM::doJob()
{
    std::cout << "Выделена память для программы" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const RAM* ram){
    os << "1 | Название оперативной памяти: " << ram->name << std::endl;
    os << "2 | Размер: " << ram->size << std::endl;

    return os;
}
