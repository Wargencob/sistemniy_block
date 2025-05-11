#include "../include/CPU.h"
#include "../include/Data.h"

CPU::CPU(std::string _name, SocketType _socketType, int _cores, int _threads, float _frequency):
    name(_name), socketType(_socketType), cores(_cores), threads(_threads), frequency(_frequency) {}
CPU::CPU(const CPU& cpu):
    name(cpu.name), socketType(cpu.socketType), cores(cpu.cores), threads(cpu.threads), frequency(cpu.frequency) {}

SocketType CPU::getSocketType(){
    return socketType;
}

void CPU::doJob()
{
    std::cout << "ЦП выполнил вычисления" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const CPU* cpu){
    os << "1 | Название процессора: " << cpu->name << std::endl;
    std::string  buffer = "";
    switch(cpu->socketType)
    {
        case 1: buffer = "Сокет типа Интел"; break;
        case 2: buffer = "Сокет типа АМД"; break;
    }
    os << "2 | Тип сокета: " << buffer << std::endl;
    os << "3 | Количество ядер: " << cpu->cores << std::endl;
    os << "4 | Частота процессора : " << cpu->frequency << std::endl;
    return os;
}
