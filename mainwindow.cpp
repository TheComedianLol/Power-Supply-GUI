#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Turn on power supply
void MainWindow::on_btnOn_clicked()
{

}

// Turn off power supply
void MainWindow::on_btnOff_clicked()
{

}

// Update the OVP value
void MainWindow::on_btnUpdateOVP_clicked()
{

}

// Update the OCP value
void MainWindow::on_btnUpdateOCP_clicked()
{

}

// Query for availible ports
void MainWindow::on_portQuery_clicked()
{
    serial serial1;
    QStringList QStringListPorts = serial1.queryPort();

    ui->comboBox->clear();
    ui->comboBox->addItems(QStringListPorts);
}

// Open port that is currently shown in the QStringListPorts
void MainWindow::on_btnOpenPort_clicked()
{
    // Pass selected port to load port method call
    QString ports = ui->comboBox->currentText();
    serial serial1;
    serial1.loadPort(ports);
}

