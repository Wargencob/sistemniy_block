#include "../include/Disk.h"
#include "../include/Data.h"

Disk::Disk(std::string _name, DiskType _diskType, float _maxSize, float _size):
    name(_name), diskType(_diskType), maxSize(_maxSize), size(_size) {}
Disk::Disk(const Disk& disk){
    name = disk.name;
    diskType = disk.diskType;
    maxSize = disk.maxSize;
    size = disk.size;
}

DiskType Disk::getDiskType(){
    return diskType;
}
void Disk::DownSize(int size){
    if(this->size - size <=0)
        this->size = 0;
    else
        this->size -= size;
}
void Disk::UpSize(int size){
    if(this->size + size >= maxSize)
        this->size = maxSize;
    else
        this->size += size;
}
void Disk::doJob()
{
    std::cout << "Диск записал программу" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Disk* disk){
    os << "1 | Название диска: " << disk->name << std::endl;
    std::string  buffer = "";
    switch(disk->diskType)
    {
    case 1: buffer = "HDD"; break;
    case 2: buffer = "Hard"; break;
    }
    os << "2 | Тип диска: " << buffer << std::endl;
    os << "3 | Максимальный размер: " << disk->maxSize << std::endl;
    os << "4 | Начальный размер: " << disk->size << std::endl;
    return os;
}
