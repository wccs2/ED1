#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <header.hpp>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("The Game");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tabWidget_1_currentChanged(int index)
{

}
