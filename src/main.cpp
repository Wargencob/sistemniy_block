#include "include/MotherBoard.h"
#include "include/RAM.h"
#include "include/CPU.h"
#include "include/Disk.h"
#include "include/PowerUnit.h"
#include "include/Data.h"


int main(int argc, char *argv[])
{
    CPU* cpu = new CPU("intel core i5", IntelSocket, 5, 10, 5000);
    cpu->Info();

    return 0;
}
