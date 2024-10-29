#include "serial.h"

//MUST HAVE CONTRUCTOR
serial::serial(){}

// Retrieves a list of the availible serial ports and returns them to the main
QStringList serial::openPort()
{
    // QStringList which is a dynamically allocated array that returns a pointer under the hood
    QStringList ports;

    foreach (auto &port, QSerialPortInfo::availablePorts())
    {
        ports.append(port.portName());
    }

    return ports;
}
