#include "../include/MotherBoard.h"
#include "../include/Data.h"
#include <stdexcept>

MotherBoard::MotherBoard(std::string _name, SocketType _socketType, DiskType _diskType, CPU* _cpu, RAM* _ram, PowerUnit* _powerUnit, Disk* _disk):
    name(_name),
    socketType(_socketType),
    diskType(_diskType),
    cpu(_cpu),
    ram(_ram),
    powerUnit(_powerUnit),
    disk(_disk)
{
    if(cpu->getSocketType() != socketType){
        throw std::runtime_error("Некорректный тип сокета");
    }
    if(disk->getDiskType() != diskType){
        throw std::runtime_error("Некорректный тип диска");
    }
}
MotherBoard::MotherBoard(const MotherBoard& motherBoard):
    name(motherBoard.name),
    socketType(motherBoard.socketType),
    diskType(motherBoard.diskType),
    cpu(motherBoard.cpu),
    ram(motherBoard.ram),
    powerUnit(motherBoard.powerUnit),
    disk(motherBoard.disk)  {}

void MotherBoard::doJob()
{
    std::cout << "Материнская плата в порядке" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const MotherBoard* motherBoard){
    os << "1 | Название диска: " << motherBoard->name << std::endl;
    std::string  buffer = "";
    switch(motherBoard->socketType)
    {
    case 1: buffer = "Интел"; break;
    case 2: buffer = "АМД"; break;
    }
    os << "2 | Тип сокета: " << buffer << std::endl;
    switch(motherBoard->diskType)
    {
    case 1: buffer = "HDD"; break;
    case 2: buffer = "Hard"; break;
    }
    os << "3 | Тип диска: " << buffer << std::endl;
    return os;
}

