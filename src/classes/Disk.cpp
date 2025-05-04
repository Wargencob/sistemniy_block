#include "../include/Disk.h"
#include "../include/Data.h"
#include <iostream>

Disk::Disk(std::string name, DiskType diskType, int size) {
    this->name = name;
    this->diskType = diskType;
    this->size = size;
}
void Disk::Info(){
    std::cout << "Disk name: " << name << ", disk size: " << size << ", disk type:"<< diskType << std::endl;
}
