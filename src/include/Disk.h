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
    float maxSize;
public:
    Disk();
    Disk(std::string name, DiskType diskType, float size, float maxSize);
    Disk(const Disk& disk);
    ~Disk() { std::cout << "Disk destructed" << std::endl; }
    DiskType getDiskType();

    void doJob() override;
    void DownSize(int size);
    void UpSize(int size);

    friend std::ostream& operator<<(std::ostream& os, const Disk* disk);

};

#endif // CDISK_H
