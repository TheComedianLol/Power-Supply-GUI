#include "serial.h"
#include "QMessageBox"

//MUST HAVE CONTRUCTOR
serial::serial(){}
serial::~serial(){}

// Retrieves a list of the availible serial ports and returns
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

QString serial::loadPort(QString port)
{
    QSerialPort(nullptr);
    QString status = "";

    // If serial port exists then close, if not create new instance
    if (_serialPort != nullptr)
    {
        _serialPort->close();
        delete _serialPort;
    }

    // Serial port communication settings                                 //BUGBUG might need faster comm if sending waveform data
    _serialPort = new QSerialPort(this);    // Pass this as the parent
    _serialPort->setPortName(port);
    _serialPort->setBaudRate(QSerialPort::Baud9600);
    _serialPort->setDataBits(QSerialPort::Data8);
    _serialPort->setParity(QSerialPort::EvenParity);
    _serialPort->setStopBits(QSerialPort::OneStop);

    if (_serialPort->open(QIODevice::ReadWrite))
    {
        return "Connected";
    }
    else
    {
        return "Failed";
    }

}

void serial::writeSerial(QString userSerialData)
{

    QString data = userSerialData;

    if (!_serialPort->isOpen())
    {
        QMessageBox::critical(nullptr, "Port Error", "Port is not opened"); //Should be "this" rather than "nullptr"
        return;
    }

    // If successful
    _serialPort->write(data);
}

QString serial::readSerial()
{

}

void serial::closeSerial()
{

}
