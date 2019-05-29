#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_bNum1_clicked();

    void on_bNum2_clicked();

    void on_bNum3_clicked();

    void on_bNum4_clicked();

    void on_bNum5_clicked();

    void on_bNum6_clicked();

    void on_bNum7_clicked();

    void on_bNum8_clicked();

    void on_bNum9_clicked();

    void on_bNum0_clicked();

    void on_bClear_clicked();

    void on_bDot_clicked();

    void on_bEqual_clicked();

    void on_bPlus_clicked();

    void on_bDivision_clicked();

    void on_bMultiplication_clicked();

    void on_bMinus_clicked();

private:
    Ui::Calculator *ui;
    double result;
    QString sNumber;
    bool isDot { false };
    char oper {};

    double convetToNumber(QString sNumber);
};

#endif // CALCULATOR_HPP
