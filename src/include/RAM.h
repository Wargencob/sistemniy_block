#include "Component.h"

#ifndef RAM_H
#define RAM_H

class RAM: public Component{
private:
    std::string name;
    int size;
public:
    RAM();
    RAM(std::string name, int size);
    RAM(const RAM& ram);
    ~RAM() { std::cout << "RAM destructed" << std::endl; }

    void doJob() override;

    friend std::ostream& operator<<(std::ostream& os, const RAM* ram);
};

#endif // RAM_H
