#include "mainwindow.h"
#include "ui_mainwindow.h"

//fjl
#include<QMdiSubWindow>
#include"mdichild.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :\
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //fjl
    //创建间隔器动作并设置间隔器
     actionSeparator=new QAction(this);
     actionSeparator->setSeparator(true);

    //更新菜单
     updateMenus();
    //当有活动窗口更新菜单
    connect(ui->mdiArea,SIGNAL(subWindowActivated(QMdiSubWindow*)),this,SLOT(updateMenus));

}

MainWindow::~MainWindow()
{
     delete ui;
}


 void MainWindow::on_action_New_triggered()
{



    MdiChild *child=new MdiChild(this);
   /*ui->mdiArea->addSubWindow(child);

     child->newFile();

     child->show();*/
}

void MainWindow::updateMenus()
{


}




