#include "Component.h"
#include <vector>
#include "Data.h"
#include "CPU.h"
#include "RAM.h"
#include "PowerUnit.h"
#include "Disk.h"

#ifndef MOTHERBOARD_H
#define MOTHERBOARD_H

class MotherBoard: public Component{
private:
    std::string name;
    SocketType socketType;
    DiskType diskType;
    CPU* cpu;
    RAM* ram;
    PowerUnit* powerUnit;
    Disk* disk;

public:
    MotherBoard();
    MotherBoard(std::string name, SocketType socketType, DiskType diskType, CPU* cpu, RAM* ram, PowerUnit* powerUnit, Disk* disk);
    MotherBoard(const MotherBoard& motherBoard);
    ~MotherBoard() { std::cout << "MotherBoard destructed" << std::endl; }

    void doJob() override;

    friend std::ostream& operator<<(std::ostream& os, const MotherBoard* motherBoard);
};

#endif // MOTHERBOARD_H
