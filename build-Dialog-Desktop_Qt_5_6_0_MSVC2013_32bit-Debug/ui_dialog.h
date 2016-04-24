/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *radiusLable;
    QLabel *areaLabel_1;
    QLabel *areaLabel_2;
    QLineEdit *radiusLineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        radiusLable = new QLabel(Dialog);
        radiusLable->setObjectName(QStringLiteral("radiusLable"));
        radiusLable->setGeometry(QRect(0, 60, 54, 12));
        areaLabel_1 = new QLabel(Dialog);
        areaLabel_1->setObjectName(QStringLiteral("areaLabel_1"));
        areaLabel_1->setGeometry(QRect(200, 70, 31, 21));
        areaLabel_1->setFrameShape(QFrame::Panel);
        areaLabel_1->setFrameShadow(QFrame::Sunken);
        areaLabel_2 = new QLabel(Dialog);
        areaLabel_2->setObjectName(QStringLiteral("areaLabel_2"));
        areaLabel_2->setGeometry(QRect(240, 70, 121, 21));
        areaLabel_2->setFrameShape(QFrame::Panel);
        areaLabel_2->setFrameShadow(QFrame::Sunken);
        radiusLineEdit = new QLineEdit(Dialog);
        radiusLineEdit->setObjectName(QStringLiteral("radiusLineEdit"));
        radiusLineEdit->setGeometry(QRect(60, 70, 113, 21));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 100, 75, 23));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        radiusLable->setText(QApplication::translate("Dialog", "\345\215\212\345\276\204", 0));
        areaLabel_1->setText(QApplication::translate("Dialog", "\351\235\242\347\247\257", 0));
        areaLabel_2->setText(QString());
        pushButton->setText(QApplication::translate("Dialog", "\350\256\241\347\256\227", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
