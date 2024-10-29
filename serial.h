#ifndef SERIAL_H
#define SERIAL_H

#include <QSerialPort>
#include <QSerialPortInfo>

class serial
{
public:
    serial();
    QStringList openPort();
    void initializeSerial();
    void writeSerial();
    QString readSerial();
    void closeSerial();
    //~serial();

private:
    // VARIABLES
    // portState
    // erros
};

#endif // SERIAL_H
