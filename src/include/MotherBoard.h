#include "Component.h"
#include "Data.h"
#include "CPU.h"
#include "RAM.h"
#include "PowerUnit.h"
#include "Disk.h"

#ifndef MOTHERBOARD_H
#define MOTHERBOARD_H

class MotherBoard: public Component{
private:
    int ramSlotsCount;
    SocketType socketType;
    DiskType diskType;
    CPU cpu;
    RAM ram;
    PowerUnit powerUnit;
    Disk disk;

public:
    MotherBoard(int ramSlotsCount, SocketType socketType, DiskType diskType);
    ~MotherBoard() { std::cout << "MotherBoard destructed" << std::endl; }
    void Info() override;
};

#endif // MOTHERBOARD_H
