#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//
#include"mdichild.h"
#include<QMdiSubWindow>

namespace Ui {
class MainWindow;

//MdiChild的前置声明
class MdiChild;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:


private slots:
    void updateMenus();//更新菜单

    void on_action_New_triggered();




private:
    Ui::MainWindow *ui;


    QAction *actionSeparator; //间隔器
    MdiChild *activeMdiChild(); //活动窗口


};

#endif // MAINWINDOW_H
