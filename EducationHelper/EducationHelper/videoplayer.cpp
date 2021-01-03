//library files
#include "videoplayer.h"
#include "ui_videoplayer.h"
#include <QMessageBox>

VideoPlayer::VideoPlayer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VideoPlayer)
{
    ui->setupUi(this);
    //video
    player = new QMediaPlayer(this);
    VW = new QVideoWidget(this);
    player->setVideoOutput(VW);
    this->setCentralWidget(VW);

    slider = new QSlider(this);
    bar = new QProgressBar(this);

    slider->setOrientation(Qt::Horizontal);
    //status bar slider and progress bar
    ui->statusbar->addPermanentWidget(slider);
    ui->statusbar->addPermanentWidget(bar);

    connect(player,&QMediaPlayer::durationChanged,slider,&QSlider::setMaximum);
    connect(player,&QMediaPlayer::positionChanged,slider,&QSlider::setValue);
    connect(slider,&QSlider::sliderMoved,player,&QMediaPlayer::setPosition);

    connect(player,&QMediaPlayer::durationChanged,bar,&QProgressBar::setMaximum);
    connect(player,&QMediaPlayer::positionChanged,bar,&QProgressBar::setValue);


}

VideoPlayer::~VideoPlayer()
{
    delete ui;
}

void VideoPlayer::on_actionOpenVideo_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,"Open a File","","Video File(*.*)");
     //QString filename = QFileDialog::getOpenFileName(this,"Open a File","","Video File(*.avi,*.mpg,*.mp4,*.MP4*)");
    on_actionStop_triggered();

    player->setMedia(QUrl::fromLocalFile(filename));
//player->setMedia(QUrl::fromLocalFile(filenames));

    on_actionPlay_triggered();

}
//playing video
void VideoPlayer::on_actionPlay_triggered()
{
    player->play();
    ui->statusbar->showMessage("Playing");
}
//pause video
void VideoPlayer::on_actionPause_triggered()
{
    player->pause();
    ui->statusbar->showMessage("Paused...");
}
//stop video button
void VideoPlayer::on_actionStop_triggered()
{
    player->stop();
    ui->statusbar->showMessage("Stoped");
}
//about tutorial player
void VideoPlayer::on_actionAbout_triggered()
{
    QString about_text;
    about_text ="Auther : Himantha Nanayakkara\n";
    about_text += "Date: 2020/11/30\n";
    about_text += "Cross Platoform Development with C++\n";
    about_text += "(c)Video Player: (R)\n";

    QMessageBox::about(this,"About Video Player",about_text);

}
