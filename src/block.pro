QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
        ../src/classes/CPU.cpp \
        ../src/classes/Disk.cpp \
        ../src/classes/MotherBoard.cpp \
        ../src/classes/PowerUnit.cpp \
        ../src/classes/RAM.cpp

HEADERS += \
        ../src/include/CPU.h \
        ../src/include/Component.h \
        ../src/include/Data.h \
        ../src/include/Disk.h \
        ../src/include/MotherBoard.h \
        ../src/include/PowerUnit.h \
        ../src/include/RAM.h \
        include/Program.h

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
