#include "../include/MotherBoard.h"
#include "../include/Data.h"
#include <iostream>

MotherBoard::MotherBoard(int ramSlotsCount, SocketType socketType, DiskType diskType):
    ramSlotsCount(ramSlotsCount), socketType(socketType), diskType(diskType) {}
void MotherBoard::Info(){
    std::cout << "Ram slots count: " << ramSlotsCount << ", socket type: " << socketType << ", disk type" << diskType << std::endl;
}
