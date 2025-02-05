#include "calculator.h"
#include "ui_calculator.h"
//set starting values
double calcVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

Calculator::Calculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calculator)
{//user interface code
    ui->setupUi(this);
    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[10];
    for(int i=0;i<10;++i){
        QString butName = "Button"+ QString::number(i);
        numButtons[i]= Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i],SIGNAL(released()),this,
                SLOT(NumPressed()));
    }

    connect(ui->Add,SIGNAL(released()),this,
            SLOT(MathButtonPressed()));
    connect(ui->Subtract,SIGNAL(released()),this,
            SLOT(MathButtonPressed()));
    connect(ui->Multiply,SIGNAL(released()),this,
            SLOT(MathButtonPressed()));
    connect(ui->Divide,SIGNAL(released()),this,
            SLOT(MathButtonPressed()));
    connect(ui->Equals,SIGNAL(released()),this,
            SLOT(EqualButtonPressed()));
    connect(ui->ChangeSign,SIGNAL(released()),this,
            SLOT(ChangeNumberSign()));
}

Calculator::~Calculator()
{
    delete ui;
}
//calcultor function for press number and display it
void Calculator:: NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    //check value is zero
    if((displayVal.toDouble()==0) || (displayVal.toDouble()==0.0)){
        ui->Display->setText(butVal);

    }else {
    QString newVal = displayVal + butVal;
    double dblNewVal = newVal.toDouble();
    ui->Display->setText(QString:: number(dblNewVal,'g',16));
}
}

//math button pressed
void Calculator :: MathButtonPressed(){

     divTrigger = false;
     multTrigger = false;
     addTrigger = false;
     subTrigger = false;
     QString displayVal = ui->Display->text();
     calcVal = displayVal.toDouble();
     QPushButton *button = (QPushButton *)sender();
     QString butVal = button->text();
     if(QString ::compare(butVal,"/", Qt::CaseInsensitive) == 0){
         divTrigger= true;
     }
     else if(QString ::compare(butVal,"*", Qt::CaseInsensitive) == 0){
         multTrigger= true;
     }
     else if(QString ::compare(butVal,"+", Qt::CaseInsensitive) == 0){
         addTrigger= true;
     }
     else {
         subTrigger= true;
     }
     ui->Display->setText("");

}

//press equal button and what to do with calculations
void Calculator :: EqualButtonPressed(){
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if(addTrigger || subTrigger || multTrigger || divTrigger){
        if(addTrigger){
            solution = calcVal+dblDisplayVal;
        }
        else if(subTrigger){
            solution = calcVal-dblDisplayVal;
        }
        else if(multTrigger){
            solution = calcVal*dblDisplayVal;
        }
        else {
            solution = calcVal /dblDisplayVal;
        }
    }
    ui->Display->setText(QString :: number(solution));
}

void Calculator :: ChangeNumberSign(){
    QString displayVal = ui->Display->text();
    //regular expression
    QRegExp reg("[-]?[0-9]*");
    if(reg.exactMatch(displayVal)){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
    }
}


void Calculator::on_Clear_clicked()
{
    //clear the display
    ui->Display->setText("0");
}
