#include "../include/CPU.h"
#include "../include/Data.h"
#include <iostream>

CPU::CPU(std::string model, SocketType socketType, int cores, int threads, float frequency){
    this->model = model;
    this->socketType = socketType;
    this->cores = cores;
    this->threads = threads;
    this->frequency = frequency;
}

void CPU::Info(){
    std::cout << "CPU model: " << model << ", cores count: " << cores << ", threads count: " << threads << ", frequency: " << frequency <<std::endl ;
}
