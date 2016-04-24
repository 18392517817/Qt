#include "dialog.h"
#include <QApplication>

#include<QDebug>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}

//QList 用法
/*
int main()
{
    QList<QString> list;
    {
        QString str("This is a test");
        list<<str;
        list<<"Hello !";

    }
    qDebug()<<list[0]<<"How are you ";
    qDebug()<<list[1]<<"How are you ";
    return 0;

}
*/
//给出半径，求出面积
/*int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}
*/
