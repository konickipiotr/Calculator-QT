#include "calculator.hpp"
#include "ui_calculator.h"
#include <string>
#include <sstream>

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_bNum1_clicked()
{
    sNumber += '1';
    ui->lDisplay->setText(sNumber);
}

void Calculator::on_bNum2_clicked()
{
    sNumber += '2';
    ui->lDisplay->setText(sNumber);
}

void Calculator::on_bNum3_clicked()
{
    sNumber += '3';
    ui->lDisplay->setText(sNumber);
}

void Calculator::on_bNum4_clicked()
{
    sNumber += '4';
    ui->lDisplay->setText(sNumber);
}

void Calculator::on_bNum5_clicked()
{
    sNumber += '5';
    ui->lDisplay->setText(sNumber);
}

void Calculator::on_bNum6_clicked()
{
    sNumber += '6';
    ui->lDisplay->setText(sNumber);
}

void Calculator::on_bNum7_clicked()
{
    sNumber += '7';
    ui->lDisplay->setText(sNumber);
}

void Calculator::on_bNum8_clicked()
{
    sNumber += '8';
    ui->lDisplay->setText(sNumber);
}

void Calculator::on_bNum9_clicked()
{
    sNumber += '9';
    ui->lDisplay->setText(sNumber);
}

void Calculator::on_bNum0_clicked()
{

    sNumber += '0';
    ui->lDisplay->setText(sNumber);

}

void Calculator::on_bClear_clicked()
{
    result = 0;
    sNumber.clear();
    ui->lDisplay->setText("0");
    isDot = false;
}

void Calculator::on_bDot_clicked()
{
    if(!isDot)
    {
        if(sNumber.isEmpty())
        {
            sNumber += "0.";
        }
        else
        {
          sNumber += ".";
        }

        ui->lDisplay->setText(sNumber);
        isDot = true;
    }
}

double Calculator::convetToNumber(QString sNumber)
{
    return sNumber.toDouble();
}

void Calculator::on_bEqual_clicked()
{
    std::ostringstream ss;
    QString s ;

    switch(oper)
    {
    case '+':
    {
        result += sNumber.toDouble();
        ss << result;
        sNumber = s.fromStdString(ss.str());
        ui->lDisplay->setText(sNumber);
        oper = ' ';
    }
    break;
    case '-':
    {
        result -= sNumber.toDouble();
        ss << result;
        sNumber = s.fromStdString(ss.str());
        ui->lDisplay->setText(sNumber);
        oper = ' ';
    }
    break;
    case '*':
    {
        result *= sNumber.toDouble();
        ss << result;
        sNumber = s.fromStdString(ss.str());
        ui->lDisplay->setText(sNumber);
        oper = ' ';
    }
    break;
    case '/':
    {
        double num = sNumber.toDouble();
        oper = ' ';
        if(num == 0.0)
        {
            ui->lDisplay->setText("Error division by zero");
            result = 0;
            break;
        }
        result /= sNumber.toDouble();
        ss << result;
        sNumber = s.fromStdString(ss.str());
        ui->lDisplay->setText(sNumber);
        oper = ' ';

    }
    break;
    }
}

void Calculator::on_bPlus_clicked()
{
    result = sNumber.toDouble();
    oper = '+';
    sNumber.clear();
}

void Calculator::on_bDivision_clicked()
{
    result = sNumber.toDouble();
    oper = '/';
    sNumber.clear();
}

void Calculator::on_bMultiplication_clicked()
{
    result = sNumber.toDouble();
    oper = '*';
    sNumber.clear();
}

void Calculator::on_bMinus_clicked()
{
    result = sNumber.toDouble();
    oper = '-';
    sNumber.clear();
}
