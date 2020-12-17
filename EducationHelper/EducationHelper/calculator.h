#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QDialog>

namespace Ui {
class Calculator;
}

class Calculator : public QDialog
{
    Q_OBJECT
    double num1 = 0,num2=0,result=0;
    double getLineEditNum();

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();
private slots:
//    void on_plus_btn_clicked();
   void NumPressed();
   void MathButtonPressed();
    void EqualButtonPressed();
    void ChangeNumberSign();




    void on_Clear_clicked();

private:
    Ui::Calculator *ui;

};

#endif // CALCULATOR_H
