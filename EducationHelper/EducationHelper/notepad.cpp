#include "notepad.h"
#include "ui_notepad.h"
//file
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

#include <QMessageBox>
//videoplayer
#include <videoplayer.h>
//calculator
#include <calculator.h>

NotePad::NotePad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NotePad)
{
    ui->setupUi(this);
    //remove space between textarea and window
    this->setCentralWidget(ui->textEdit);
}

NotePad::~NotePad()
{
    delete ui;
}


void NotePad::on_actionNewPage_triggered()
{
    //set document to blank
        file_path_="";
        ui->textEdit->setText("");

}

void NotePad::on_actionOpen_triggered()
{
    //notepad open text documents
       QString file_name = QFileDialog::getOpenFileName(this,"Open the file");
       QFile file(file_name);
       file_path_= file_name;
       if(!file.open(QFile::ReadOnly | QFile::Text)){
           QMessageBox::warning(this,"..","file not open");
           return;
       }
       QTextStream in (&file);
       QString text = in.readAll();
       //passing file to the UI
       ui->textEdit->setText(text);
       file.close();

}

void NotePad::on_actionSave_triggered()
{
    //new my new code Updated to filepath is empty or not
        //checking current file path is not true if it's true update current file else promp a dialof box to save it as a new document
        if(file_path_.isEmpty()){
            return on_actionSaveAs_triggered();
        }
        else{
            QFile file(file_path_);
            if(!file.open(QFile::WriteOnly | QFile::Text)){
                QMessageBox::warning(this,"..","file not open");
                return;
            }
            QTextStream out (&file);
            //after the save blank text
            QString text = ui->textEdit->toPlainText();
            //output

            out<< text;
            file.flush();
            file.close();
        }
        //new////
        //notepad save text documents
            //QString file_name = QFileDialog::getSaveFileName(this,"Open the file");
        // My previous code
    //        QFile file(file_path_);
    //        if(!file.open(QFile::WriteOnly | QFile::Text)){
    //            QMessageBox::warning(this,"..","file not open");
    //            return;
    //        }
    //        QTextStream out (&file);
    //        //after the save blank text
    //        QString text = ui->textEdit->toPlainText();
    //        //output

    //        out<< text;
    //        file.flush();
    //        file.close();

}

void NotePad::on_actionSaveAs_triggered()
{
    //notepad save text documents
       // QString file_name = QFileDialog::getSaveFileName(this,"Open the file");
     QString file_name = QFileDialog::getSaveFileName(this, tr("open the file"),"untitled.txt", tr("Text Files (*.txt);;All Files (*.*)"));
        QFile file(file_name);
        file_path_ = file_name;
        if(!file.open(QFile::WriteOnly | QFile::Text)){
            QMessageBox::warning(this,"..","file not open");
            return;
        }
        QTextStream out (&file);
        //after the save blank text
        QString text = ui->textEdit->toPlainText();
        //output

        out<< text;
        file.flush();
        file.close();

}

void NotePad::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void NotePad::on_actionCopy_triggered()
{
     ui->textEdit->copy();
}

void NotePad::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void NotePad::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void NotePad::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void NotePad::on_actionCalculator_triggered()
{
    calculator = new Calculator(this);
    calculator->show();
}

void NotePad::on_actionVideo_triggered()
{
    //videoplayer = new VideoPlayer();
    videoplayer = new VideoPlayer(this);
    videoplayer->show();
}

void NotePad::on_actionAbout_triggered()
{
    QString about_text;
    about_text ="Owner : Himantha Nanayakkara\n";

    about_text += "Description: I Developed A Product.It's A Combination Of NotePad , VideoPlayer And Calculator\n"
                  "I think this is helpful for students for their education purpose\n"
                  "Thank You\n"
                  "Cross Platoform Development with C++\n";
    about_text += "(c)3 in 1 Software: (R)\n";
    about_text += "Last Update: 2020/11/30\n";

    QMessageBox::about(this,"About Education Helper",about_text);

}
