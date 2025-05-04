#include "include/MotherBoard.h"
#include "include/RAM.h"
#include "include/CPU.h"
#include "include/Disk.h"
#include "include/PowerUnit.h"
#include "include/Data.h"


int main(int argc, char *argv[])
{
    CPU* cpu = new CPU("intel core i5", IntelSocket, 5, 10, 5000);
    RAM* ram = new RAM("default ram", 2048);
    Disk* disk = new Disk("default disk", HDD, 100);
    PowerUnit* powerUnit = new PowerUnit("default unit", 200);

    cpu->Info();
    ram->Info();
    disk->Info();
    powerUnit->Info();

    return 0;
}
