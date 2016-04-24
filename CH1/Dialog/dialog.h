#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
//类的前置声明
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    //槽
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    
};

#endif // DIALOG_H
