#ifndef SERIAL_H
#define SERIAL_H

#include <iostream>
#include <QSerialPort>
#include <QSerialPortInfo>
#include "QMessageBox"

class serial
{
public:
    serial();
    ~serial();

    QStringList queryPort();
    QString     loadPort(QString setPort);
    void        writeSerial(QString userSerialData);
    QString     readSerial();
    void        closeSerial();

    // QSerialPort * _serialPort;

private:
    QSerialPort *_serialPort; // Pointer to the Q serial port class member variable


};

#endif // SERIAL_H
