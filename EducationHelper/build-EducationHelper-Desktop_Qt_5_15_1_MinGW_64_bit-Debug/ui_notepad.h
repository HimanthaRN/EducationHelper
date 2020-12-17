/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotePad
{
public:
    QAction *actionNewPage;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionRedo;
    QAction *actionUndo;
    QAction *actionCalculator;
    QAction *actionVideo;
    QAction *actionAbout;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuCalculator;
    QMenu *menuMedia_Player;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *NotePad)
    {
        if (NotePad->objectName().isEmpty())
            NotePad->setObjectName(QString::fromUtf8("NotePad"));
        NotePad->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/graduated.png"), QSize(), QIcon::Normal, QIcon::Off);
        NotePad->setWindowIcon(icon);
        NotePad->setStyleSheet(QString::fromUtf8("background-color:#ABD9F7"));
        actionNewPage = new QAction(NotePad);
        actionNewPage->setObjectName(QString::fromUtf8("actionNewPage"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon2/new2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewPage->setIcon(icon1);
        actionOpen = new QAction(NotePad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(NotePad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon2/save2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSaveAs = new QAction(NotePad);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon4);
        actionCut = new QAction(NotePad);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon5);
        actionCopy = new QAction(NotePad);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon2/copy2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon6);
        actionPaste = new QAction(NotePad);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon2/paste2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon7);
        actionRedo = new QAction(NotePad);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon8);
        actionUndo = new QAction(NotePad);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon9);
        actionCalculator = new QAction(NotePad);
        actionCalculator->setObjectName(QString::fromUtf8("actionCalculator"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/calculator2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCalculator->setIcon(icon10);
        actionVideo = new QAction(NotePad);
        actionVideo->setObjectName(QString::fromUtf8("actionVideo"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/videoicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVideo->setIcon(icon11);
        actionAbout = new QAction(NotePad);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icon2/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon12);
        centralwidget = new QWidget(NotePad);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 771, 491));
        textEdit->setStyleSheet(QString::fromUtf8("background-color:#D7E9F5"));
        NotePad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NotePad);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuCalculator = new QMenu(menubar);
        menuCalculator->setObjectName(QString::fromUtf8("menuCalculator"));
        menuMedia_Player = new QMenu(menubar);
        menuMedia_Player->setObjectName(QString::fromUtf8("menuMedia_Player"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        NotePad->setMenuBar(menubar);
        statusbar = new QStatusBar(NotePad);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NotePad->setStatusBar(statusbar);
        toolBar = new QToolBar(NotePad);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setStyleSheet(QString::fromUtf8("background-color:#1B2C36"));
        NotePad->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuCalculator->menuAction());
        menubar->addAction(menuMedia_Player->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNewPage);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionUndo);
        menuCalculator->addAction(actionCalculator);
        menuMedia_Player->addAction(actionVideo);
        menuAbout->addAction(actionAbout);
        toolBar->addAction(actionNewPage);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSaveAs);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addSeparator();
        toolBar->addAction(actionCalculator);
        toolBar->addSeparator();
        toolBar->addAction(actionVideo);
        toolBar->addSeparator();
        toolBar->addAction(actionAbout);

        retranslateUi(NotePad);

        QMetaObject::connectSlotsByName(NotePad);
    } // setupUi

    void retranslateUi(QMainWindow *NotePad)
    {
        NotePad->setWindowTitle(QCoreApplication::translate("NotePad", "Education | Helper | NotePad", nullptr));
        actionNewPage->setText(QCoreApplication::translate("NotePad", "NewPage", nullptr));
#if QT_CONFIG(tooltip)
        actionNewPage->setToolTip(QCoreApplication::translate("NotePad", "NewPage", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOpen->setText(QCoreApplication::translate("NotePad", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("NotePad", "Save", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("NotePad", "Save", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveAs->setText(QCoreApplication::translate("NotePad", "SaveAs", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAs->setToolTip(QCoreApplication::translate("NotePad", "SaveAs", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCut->setText(QCoreApplication::translate("NotePad", "Cut", nullptr));
#if QT_CONFIG(tooltip)
        actionCut->setToolTip(QCoreApplication::translate("NotePad", "Cut", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopy->setText(QCoreApplication::translate("NotePad", "Copy", nullptr));
#if QT_CONFIG(tooltip)
        actionCopy->setToolTip(QCoreApplication::translate("NotePad", "Copy", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPaste->setText(QCoreApplication::translate("NotePad", "Paste", nullptr));
#if QT_CONFIG(tooltip)
        actionPaste->setToolTip(QCoreApplication::translate("NotePad", "Paste", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRedo->setText(QCoreApplication::translate("NotePad", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        actionRedo->setToolTip(QCoreApplication::translate("NotePad", "Redo", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUndo->setText(QCoreApplication::translate("NotePad", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        actionUndo->setToolTip(QCoreApplication::translate("NotePad", "Undo", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCalculator->setText(QCoreApplication::translate("NotePad", "Calculator", nullptr));
#if QT_CONFIG(tooltip)
        actionCalculator->setToolTip(QCoreApplication::translate("NotePad", "Calculator", nullptr));
#endif // QT_CONFIG(tooltip)
        actionVideo->setText(QCoreApplication::translate("NotePad", "Video", nullptr));
#if QT_CONFIG(tooltip)
        actionVideo->setToolTip(QCoreApplication::translate("NotePad", "Video", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAbout->setText(QCoreApplication::translate("NotePad", "About", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("NotePad", "About", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFile->setTitle(QCoreApplication::translate("NotePad", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("NotePad", "Edit", nullptr));
        menuCalculator->setTitle(QCoreApplication::translate("NotePad", "Calculator", nullptr));
        menuMedia_Player->setTitle(QCoreApplication::translate("NotePad", "Video Player", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("NotePad", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("NotePad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotePad: public Ui_NotePad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
