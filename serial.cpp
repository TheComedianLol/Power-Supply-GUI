#include "serial.h"

// CONSTRUCTOR MUST HAVE
serial::serial(){}

QStringList serial::openPort()
{
    // QStringList will store the array on the heap using aloc and returns a pointer to that memory (Memory Safe)
    QStringList portList;

    foreach(auto &ports, QSerialPortInfo::availablePorts())
    {
        portList.append(ports.portName());
    }

    return portList;
}

