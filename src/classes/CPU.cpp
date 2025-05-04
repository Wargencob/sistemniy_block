#include "../include/CPU.h"
#include "../include/Data.h"
#include <iostream>

CPU::CPU(std::string model, SocketType socketType, int cores, int threads, float frequency):
    model(model), socketType(socketType), cores(cores), threads(threads), frequency(frequency) {}

void CPU::Info(){
    std::cout << "CPU model: " << model << ", cores count: " << cores << ", threads count: " << threads << ", frequency: " << frequency ;
}
