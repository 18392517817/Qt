#include "dialog.h"
#include "ui_dialog.h"


const static double PI=3.1416;//

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
     bool ok;
     QString tempStr;
     //读取输入框中的数字
     QString valueStr=ui->radiusLineEdit->text();
     //转换字符到数字
     int valueInt=valueStr.toInt(&ok);
     //计算圆面积
     double area=valueInt*valueInt*PI;
     //显示到显示窗口
     ui->areaLabel_2->setText(tempStr.setNum(area));
}
