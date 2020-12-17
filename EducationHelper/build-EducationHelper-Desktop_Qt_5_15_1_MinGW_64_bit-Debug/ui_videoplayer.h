/********************************************************************************
** Form generated from reading UI file 'videoplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPLAYER_H
#define UI_VIDEOPLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoPlayer
{
public:
    QAction *actionOpenVideo;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionAbout;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuVideo;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *VideoPlayer)
    {
        if (VideoPlayer->objectName().isEmpty())
            VideoPlayer->setObjectName(QString::fromUtf8("VideoPlayer"));
        VideoPlayer->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/videoicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        VideoPlayer->setWindowIcon(icon);
        VideoPlayer->setStyleSheet(QString::fromUtf8("background-color:#ABD9F7"));
        actionOpenVideo = new QAction(VideoPlayer);
        actionOpenVideo->setObjectName(QString::fromUtf8("actionOpenVideo"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenVideo->setIcon(icon1);
        actionPlay = new QAction(VideoPlayer);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon2);
        actionPause = new QAction(VideoPlayer);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon3);
        actionStop = new QAction(VideoPlayer);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon4);
        actionAbout = new QAction(VideoPlayer);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon2/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon5);
        centralwidget = new QWidget(VideoPlayer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        VideoPlayer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VideoPlayer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuVideo = new QMenu(menubar);
        menuVideo->setObjectName(QString::fromUtf8("menuVideo"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        VideoPlayer->setMenuBar(menubar);
        statusbar = new QStatusBar(VideoPlayer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        VideoPlayer->setStatusBar(statusbar);
        toolBar = new QToolBar(VideoPlayer);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setStyleSheet(QString::fromUtf8("background-color:#1B2C36"));
        VideoPlayer->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(VideoPlayer);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        toolBar_2->setStyleSheet(QString::fromUtf8("background-color:#1B2C36"));
        VideoPlayer->addToolBar(Qt::BottomToolBarArea, toolBar_2);

        menubar->addAction(menuVideo->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuVideo->addAction(actionOpenVideo);
        menuVideo->addSeparator();
        menuVideo->addAction(actionPlay);
        menuVideo->addAction(actionPause);
        menuVideo->addAction(actionStop);
        menuAbout->addAction(actionAbout);
        toolBar->addAction(actionOpenVideo);
        toolBar->addSeparator();
        toolBar->addAction(actionPlay);
        toolBar->addAction(actionPause);
        toolBar->addAction(actionStop);
        toolBar->addSeparator();
        toolBar->addAction(actionAbout);
        toolBar->addSeparator();
        toolBar_2->addAction(actionPlay);
        toolBar_2->addAction(actionPause);
        toolBar_2->addAction(actionStop);

        retranslateUi(VideoPlayer);

        QMetaObject::connectSlotsByName(VideoPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *VideoPlayer)
    {
        VideoPlayer->setWindowTitle(QCoreApplication::translate("VideoPlayer", "Tutorial Player", nullptr));
        actionOpenVideo->setText(QCoreApplication::translate("VideoPlayer", "OpenVideo", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenVideo->setToolTip(QCoreApplication::translate("VideoPlayer", "OpenVideo", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPlay->setText(QCoreApplication::translate("VideoPlayer", "Play", nullptr));
#if QT_CONFIG(tooltip)
        actionPlay->setToolTip(QCoreApplication::translate("VideoPlayer", "Play", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPause->setText(QCoreApplication::translate("VideoPlayer", "Pause", nullptr));
#if QT_CONFIG(tooltip)
        actionPause->setToolTip(QCoreApplication::translate("VideoPlayer", "Pause", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStop->setText(QCoreApplication::translate("VideoPlayer", "Stop", nullptr));
#if QT_CONFIG(tooltip)
        actionStop->setToolTip(QCoreApplication::translate("VideoPlayer", "Stop", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAbout->setText(QCoreApplication::translate("VideoPlayer", "About", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("VideoPlayer", "About", nullptr));
#endif // QT_CONFIG(tooltip)
        menuVideo->setTitle(QCoreApplication::translate("VideoPlayer", "Video Player", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("VideoPlayer", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("VideoPlayer", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("VideoPlayer", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoPlayer: public Ui_VideoPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPLAYER_H
