#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include <QMainWindow>
//video
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QFileDialog>
#include <QProgressBar>
#include <QSlider>

namespace Ui {
class VideoPlayer;
}

class VideoPlayer : public QMainWindow
{
    Q_OBJECT

public:
    explicit VideoPlayer(QWidget *parent = nullptr);
    ~VideoPlayer();

private slots:
    void on_actionOpenVideo_triggered();

    void on_actionPlay_triggered();

    void on_actionPause_triggered();

    void on_actionStop_triggered();

    void on_actionAbout_triggered();

private:
    Ui::VideoPlayer *ui;
    //video
    QMediaPlayer* player;
    QVideoWidget* VW;
    QProgressBar* bar;
    QSlider* slider;
};

#endif // VIDEOPLAYER_H
