#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/Srikrishnan/Documents/database/bc.db");
    if(mydb.open())
        qDebug()<<"DB Connected";
    else
         qDebug()<<"DB Failed";

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
     QString name, unit;
     unsigned int wave, rctn, temp, fact, blnk, dely, read, lag, linmin, linmax, normin, normax;
     unsigned int mode, nostd, rpt, std1,std2,std3,std4,std5,std6,std7,std8;
     unsigned int ct1avg, ct1min, ct1bno, ct2avg, ct2min, ct2bno;

     name=ui->lineEdit_4->text();
     unit=ui->lineEdit_5->text();
     wave=ui->comboBox->currentText().toUInt();
     rctn=ui->comboBox_2->currentIndex();
     temp=ui->comboBox_3->currentIndex();
     fact=ui->lineEdit_6->text().toUInt();
     blnk=ui->comboBox_4->currentIndex();
     dely=ui->lineEdit_7->text().toUInt();
     read=ui->lineEdit_8->text().toUInt();
     lag=ui->lineEdit_22->text().toUInt();
     linmin=ui->lineEdit_9->text().toUInt();
     linmax=ui->lineEdit_10->text().toUInt();
     normin=ui->lineEdit_11->text().toUInt();
     normax=ui->lineEdit_12->text().toUInt();
     mode=ui->comboBox_7->currentIndex();
     nostd=ui->comboBox_5->currentText().toUInt();
     rpt=ui->comboBox_6->currentText().toUInt();
     std1=ui->lineEdit_13->text().toInt();
     std2=ui->lineEdit_14->text().toInt();
     std3=ui->lineEdit_15->text().toInt();
     std4=ui->lineEdit_16->text().toInt();
     std5=ui->lineEdit_17->text().toInt();
     std6=ui->lineEdit_18->text().toInt();
     std7=ui->lineEdit_19->text().toInt();
     std8=ui->lineEdit_20->text().toInt();
     ct1avg=ui->lineEdit_21->text().toInt();
     ct1min=ui->lineEdit_23->text().toInt();
     ct1bno=ui->lineEdit_26->text().toInt();
     ct2avg=ui->lineEdit_25->text().toInt();
     ct2min=ui->lineEdit_28->text().toInt();
     ct2bno=ui->lineEdit_29->text().toInt();



     QSqlQuery qry;

     qry.prepare("insert into test(name,wave,rctn,unit,temp,fact,blnk,dely,read,lag,linmin,linmax,normin,normax,mode,nostd,rpt,con1,con2,con3,con4,con5,con6,con7,con8,"
                 "ctrl1avg,ctrl1min,ctrl1bno,ctrl2avg,ctrl2min,ctrl2bno) values(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
     qry.addBindValue(name);
     qry.addBindValue(wave);
     qry.addBindValue(rctn);
     qry.addBindValue(unit);
     qry.addBindValue(temp);
     qry.addBindValue(fact);
     qry.addBindValue(blnk);
     qry.addBindValue(dely);
     qry.addBindValue(read);
     qry.addBindValue(lag);
     qry.addBindValue(linmin);
     qry.addBindValue(linmax);
     qry.addBindValue(normin);
     qry.addBindValue(normax);
     qry.addBindValue(mode);
     qry.addBindValue(nostd);
     qry.addBindValue(rpt);
     qry.addBindValue(std1);
     qry.addBindValue(std2);
     qry.addBindValue(std3);
     qry.addBindValue(std4);
     qry.addBindValue(std5);
     qry.addBindValue(std6);
     qry.addBindValue(std7);
     qry.addBindValue(std8);
     qry.addBindValue(ct1avg);
     qry.addBindValue(ct1min);
     qry.addBindValue(ct1bno);
     qry.addBindValue(ct2avg);
     qry.addBindValue(ct2min);
     qry.addBindValue(ct2bno);
     qry.exec();



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
