#include "Component.h"
#include "Data.h"

#ifndef CPU_H
#define CPU_H

class CPU : public Component {
private:
    std::string model;
    SocketType socketType;
    int cores;
    int threads;
    float frequency;
public:
    CPU(std::string model, SocketType socketType, int cores, int threads, float frequency);
    void Info() override;
    ~CPU() { std::cout << "CPU destructed" << std::endl; }
};

#endif // CPU_H
