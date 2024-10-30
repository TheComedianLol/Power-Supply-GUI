#ifndef SERIAL_H
#define SERIAL_H

#include <QSerialPort>
#include <QSerialPortInfo>

class serial
{
public:
    serial();

    QStringList queryPort();
    void loadPort(QString setPort);
    void writeSerial();
    QString readSerial();
    void closeSerial();


private:
    QSerialPort *_serialPort; // Pointer to the Q serial port class member variable


};

#endif // SERIAL_H
