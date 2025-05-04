#include "../include/RAM.h"
#include <iostream>

RAM::RAM(std::string name, int size){
    this->name = name;
    this->size = size;
}

void RAM::Info(){
    std::cout << "RAM name: " << name << ", size: " << std::endl;
}
