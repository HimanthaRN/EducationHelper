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
    void on_actionNewPage_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSaveAs_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionRedo_triggered();

    void on_actionUndo_triggered();

    void on_actionCalculator_triggered();

    void on_actionVideo_triggered();

    void on_actionAbout_triggered();

private:
    Ui::NotePad *ui;
    QString file_path_;
    //create a pointer
    VideoPlayer *videoplayer;
    Calculator *calculator;
};
#endif // NOTEPAD_H
