#include "../include/MotherBoard.h"
#include "../include/Data.h"
#include <iostream>

MotherBoard::MotherBoard(int ramSlotsCount, SocketType socketType, DiskType diskType, CPU* cpu, RAM* ram, PowerUnit* powerUnit, Disk* disk):
    ramSlotsCount(ramSlotsCount), socketType(socketType), diskType(diskType), cpu(cpu), ram(ram), powerUnit(powerUnit), disk(disk) {}
void MotherBoard::Info(){
    std::cout << "Ram slots count: " << ramSlotsCount << ", socket type: " << socketType << ", disk type" << diskType << std::endl;
}
