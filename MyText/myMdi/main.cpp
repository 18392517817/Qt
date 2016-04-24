#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    //setCodecForTr();
   // QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
