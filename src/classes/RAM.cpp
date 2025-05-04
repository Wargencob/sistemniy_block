#include "../include/RAM.h"
#include <iostream>

RAM::RAM(std::string name, int size):
    name(name), size(size) {}

void RAM::Info(){
    std::cout << "RAM name: " << name << ", size: " << std::endl;
}
