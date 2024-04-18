#include "mainwindow.h"
#include "./ui_mainwindow.h"


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

int firstNumber,secondNumber,result;

void MainWindow::on_btnAdd_clicked()
{
    firstNumber=ui->txtFirstNum->text().toInt();
    secondNumber=ui->txtSecondNum->text().toInt();
    result=firstNumber+secondNumber;
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnSubtract_clicked()
{
    firstNumber=ui->txtFirstNum->text().toInt();
    secondNumber=ui->txtSecondNum->text().toInt();
    result=firstNumber-secondNumber;
    ui->txtResult->setText(QString::number(result));

}

void MainWindow::on_btnDivide_clicked()
{
    firstNumber=ui->txtFirstNum->text().toInt();
    secondNumber=ui->txtSecondNum->text().toInt();
    result=firstNumber/secondNumber;
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnMultiply_clicked()
{
    firstNumber=ui->txtFirstNum->text().toInt();
    secondNumber=ui->txtSecondNum->text().toInt();
    result=firstNumber*secondNumber;
    ui->txtResult->setText(QString::number(result));
}

