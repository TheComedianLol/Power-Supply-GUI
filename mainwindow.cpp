#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "modbus.h"

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

// turn off power supply
void MainWindow::on_btnOff_clicked()
{

}

// update the OVP value
void MainWindow::on_btnUpdateOVP_clicked()
{

}

// update the OCP value
void MainWindow::on_btnUpdateOCP_clicked()
{

}

