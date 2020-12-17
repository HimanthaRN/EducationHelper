/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QPushButton *Button0;
    QPushButton *Subtract;
    QPushButton *Button7;
    QPushButton *Add;
    QPushButton *Clear;
    QPushButton *Button2;
    QPushButton *Divide;
    QPushButton *Button1;
    QPushButton *Button4;
    QLineEdit *Display;
    QPushButton *Button8;
    QPushButton *Equals;
    QPushButton *Button9;
    QPushButton *Multiply;
    QPushButton *Button6;
    QPushButton *ChangeSign;
    QPushButton *Button5;
    QPushButton *Button3;

    void setupUi(QDialog *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(444, 329);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/calculator2.png"), QSize(), QIcon::Normal, QIcon::Off);
        Calculator->setWindowIcon(icon);
        Calculator->setStyleSheet(QString::fromUtf8("background-color:#ABD9F7"));
        Button0 = new QPushButton(Calculator);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setGeometry(QRect(98, 275, 75, 28));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        Subtract = new QPushButton(Calculator);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        Subtract->setGeometry(QRect(262, 275, 75, 28));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#9249FB;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        Button7 = new QPushButton(Calculator);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(16, 170, 75, 28));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        Add = new QPushButton(Calculator);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(262, 240, 75, 28));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#9249FB;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        Clear = new QPushButton(Calculator);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setGeometry(QRect(16, 275, 75, 28));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        Button2 = new QPushButton(Calculator);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(98, 240, 75, 28));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        Divide = new QPushButton(Calculator);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        Divide->setGeometry(QRect(262, 170, 75, 28));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#9249FB;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        Button1 = new QPushButton(Calculator);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(16, 240, 75, 28));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        Button4 = new QPushButton(Calculator);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(16, 205, 75, 28));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        Display = new QLineEdit(Calculator);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(16, 14, 403, 149));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color:gray;\n"
"border:1px solid gray;\n"
"color:#ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Button8 = new QPushButton(Calculator);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(98, 170, 75, 28));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        Equals = new QPushButton(Calculator);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        Equals->setGeometry(QRect(344, 170, 75, 133));
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        Equals->setFont(font1);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#0A5181;\n"
"border:1px solid gray;\n"
"color:white;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
""));
        Button9 = new QPushButton(Calculator);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(180, 170, 75, 28));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        Multiply = new QPushButton(Calculator);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        Multiply->setGeometry(QRect(262, 205, 75, 28));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#9249FB;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        Button6 = new QPushButton(Calculator);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(180, 205, 75, 28));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        ChangeSign = new QPushButton(Calculator);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        ChangeSign->setGeometry(QRect(180, 275, 75, 28));
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        Button5 = new QPushButton(Calculator);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(98, 205, 75, 28));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));
        Button3 = new QPushButton(Calculator);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(180, 240, 75, 28));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#C0C0C0;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#A9A9A9;\n"
"border:1px solid gray;\n"
"padding:5px;\n"
"}"));

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QDialog *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "EQUAL", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
