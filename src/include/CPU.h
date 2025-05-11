#include "Component.h"
#include "Data.h"
#include <iostream>

#ifndef CPU_H
#define CPU_H

class CPU : public Component {
private:
    std::string name;
    SocketType socketType;
    int cores;
    int threads;
    float frequency;
public:
    CPU();
    CPU(std::string name, SocketType socketType, int cores, int threads, float frequency);
    CPU(const CPU& cpu);
    ~CPU() { std::cout << "CPU destructed" << std::endl; }

    void doJob() override;
    SocketType getSocketType();

    friend std::ostream& operator<<(std::ostream& os, const CPU* cpu);
};

#endif // CPU_H
