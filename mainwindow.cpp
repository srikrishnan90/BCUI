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


void MainWindow::on_toolButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_toolButton_8_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_toolButton_9_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_toolButton_10_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_toolButton_11_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_toolButton_12_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_toolButton_13_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_toolButton_14_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_309_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_toolButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_toolButton_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_117_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_toolButton_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_222_clicked()
{
     ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_toolButton_4_clicked()
{
     ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_toolButton_5_clicked()
{
     ui->stackedWidget->setCurrentIndex(8);
}
