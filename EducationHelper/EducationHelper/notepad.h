#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <videoplayer.h>
#include <calculator.h>
QT_BEGIN_NAMESPACE
namespace Ui { class NotePad; }
QT_END_NAMESPACE

class NotePad : public QMainWindow
{
    Q_OBJECT

public:
    NotePad(QWidget *parent = nullptr);
    ~NotePad();

private slots:
    //declaring all slots for a notepad
    //new page function
    void on_actionNewPage_triggered();
    //open
    void on_actionOpen_triggered();
    //save the page
    void on_actionSave_triggered();
    //save as function
    void on_actionSaveAs_triggered();
    //cut function
    void on_actionCut_triggered();
//copy function
    void on_actionCopy_triggered();
//paste function
    void on_actionPaste_triggered();
// redo function
    void on_actionRedo_triggered();
//undo function
    void on_actionUndo_triggered();
//Calculator trigger for moving to calculator page when it clicked
    void on_actionCalculator_triggered();
//video player trigger for moving to calculator page when it clicked
    void on_actionVideo_triggered();
//about and aims of the application
    void on_actionAbout_triggered();

private:
    Ui::NotePad *ui;
    QString file_path_;
    //create a pointer
    VideoPlayer *videoplayer;
    Calculator *calculator;
};
#endif // NOTEPAD_H
