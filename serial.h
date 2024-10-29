#ifndef SERIAL_H
#define SERIAL_H

#include <QSerialPort>
#include <QSerialPortInfo>

class serial
{
public:
    serial();
    QStringList openPort();

    //~serial();

private:
    // VARIABLES
    // portState
    // erros

    // FUNCTIONS
    // initializeSerial()
    // readSeraial()
    // writeSerial()
    // closeSerial()
};

#endif // SERIAL_H
