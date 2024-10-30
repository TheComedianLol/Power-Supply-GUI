#include "serial.h"

//MUST HAVE CONTRUCTOR
serial::serial(){}

// Retrieves a list of the availible serial ports and returns them to the main
QStringList serial::queryPort()
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

void serial::loadPort(QString port)
{
    QSerialPort(nullptr);

    // If serial port exists then close, if not create new instance
    if (_serialPort != nullptr)
    {
        _serialPort->close();
        delete _serialPort;
    }

    _serialPort = new QSerialPort(this);    // Pass this as the parent
    _serialPort->setPortName(port);
    _serialPort->QSerialPort::Baud9600;
    _serialPort->setBaudRate(QSerialPort::Baud9600);
    _serialPort->setDataBits(QSerialPort::Data8);
    _serialPort->setParity(QSerialPort::EvenParity);
    _serialPort->setStopBits(QSerialPort::OneStop);
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
