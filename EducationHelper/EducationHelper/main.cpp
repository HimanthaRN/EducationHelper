#include "notepad.h"

#include <QApplication>

int main(int argc, char *argv[])
{   //when running the software it starting from notepad
    QApplication a(argc, argv);
    NotePad w;
    w.show();
    return a.exec();
}
