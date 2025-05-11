#include "include/MotherBoard.h"
#include "include/RAM.h"
#include "include/CPU.h"
#include "include/Disk.h"
#include "include/PowerUnit.h"
#include "include/Data.h"


void Job(Component* component)
{
    component->doJob();
}

int main()
{
    CPU* cpu = new CPU("intel core i5", IntelSocket, 5, 10, 5000);
    RAM* ram = new RAM("Стандартная оперативная память", 2048);
    Disk* disk = new Disk("Стандартный диск", HDD, 200, 0);
    PowerUnit* powerUnit = new PowerUnit("Стандартный БП", 200);
    MotherBoard* motherBoard = new MotherBoard("Стандартная материнская плата", IntelSocket, HDD, cpu, ram, powerUnit, disk);

    Disk* disk2 = new Disk(*disk);

    Job(cpu);

    delete(ram);

    std::cout << disk << std::endl;
    std::cout << disk2 << std::endl;

    disk2->UpSize(100);

    std::cout << disk << std::endl;
    std::cout << disk2 << std::endl;

    return 0;
}

