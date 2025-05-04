#include "Component.h"
#include "Data.h"

#ifndef CPU_H
#define CPU_H

class CPU : public Component {
private:
    std::string model;
    std::string socketType;
    int cores;
    int threads;
    float frequency;
    SocketType type;
public:
    CPU(std::string model, int cores, int threads, float frequency);
    void Info() override;
};

#endif // CPU_H
