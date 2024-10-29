#include "serial.h"

//MUST HAVE CONTRUCTOR
serial::serial(){}

// Retrieves a list of the availible serial ports and returns them to the main
QStringList serial::openPort()
{
    // QStringList which is a dynamically allocated array that returns a pointer under the hood
    QStringList ports;

    // foreach will loop through a range of availible ports and append to a list
    for (const QSerialPortInfo &port : QSerialPortInfo::availablePorts())
    {
        ports.append(port.portName());
    }

    return ports;
}

void serial::writeSerial()
{

}

QString serial::readSerial()
{

}

void serial::closeSerial()
{

}
