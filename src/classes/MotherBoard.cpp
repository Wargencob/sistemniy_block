#include "../include/MotherBoard.h"
#include "../include/Data.h"
#include <iostream>
#include <stdexcept>

MotherBoard::MotherBoard(int ramSlotsCount, SocketType socketType, DiskType diskType, CPU* cpu, RAM* ram, PowerUnit* powerUnit, Disk* disk):
    ramSlotsCount(ramSlotsCount), socketType(socketType), diskType(diskType), cpu(cpu), ram(ram), powerUnit(powerUnit), disk(disk) {

    if(cpu->getSocketType() != socketType){
        throw std::runtime_error("CPU socket type incorrect");
    }
    if(disk->getDiskType() != diskType){
        throw std::runtime_error("Disk type incorrect");
    }
}
void MotherBoard::Info(){
    std::cout << "Ram slots count: " << ramSlotsCount << ", socket type: " << socketType << ", disk type" << diskType << std::endl;
}
