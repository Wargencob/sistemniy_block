#include "Component.h"
#include "Data.h"

#ifndef DISK_H
#define DISK_H

class Disk : Component
{
private:
    std::string name;
    DiskType diskType;
    float size;
public:
    Disk(std::string name, DiskType diskType, float size);
    ~Disk() { std::cout << "Disk destructed" << std::endl; }
    DiskType getDiskType();
    void Info() override;
    void DownSize(int size);
    void UpSize(int size);
};

#endif // CDISK_H
