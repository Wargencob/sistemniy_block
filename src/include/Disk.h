#include "Component.h"
#include "Data.h"

#ifndef DISK_H
#define DISK_H

class Disk : Component
{
private:
    std::string name;
    int size;
    DiskType type;
public:
    Disk(std::string name, int fullSize);
    void Info() override;
    void DownSize(int size);
    void UpSize(int size);
};

#endif // CDISK_H
