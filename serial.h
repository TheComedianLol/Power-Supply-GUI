#ifndef SERIAL_H
#define SERIAL_H

#include <QSerialPort>
#include <QSerialPortInfo>

class serial
{
public:
    serial();
    QStringList openPort();

    // ~serial();
    // QStringList ~openPort();

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
