/********************************************************************************
** Form generated from reading UI file 'textnodedemo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTNODEDEMO_H
#define UI_TEXTNODEDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextNodeDemoClass
{
public:
    QAction *action_NEW_N;
    QAction *action_O;
    QAction *action_S;
    QAction *action_A;
    QAction *action_X;
    QAction *action_N;
    QAction *action_T;
    QAction *action_C;
    QAction *action_W;
    QAction *action_F;
    QAction *action_S_2;
    QAction *action_A_2;
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TextNodeDemoClass)
    {
        if (TextNodeDemoClass->objectName().isEmpty())
            TextNodeDemoClass->setObjectName(QStringLiteral("TextNodeDemoClass"));
        TextNodeDemoClass->resize(761, 469);
        action_NEW_N = new QAction(TextNodeDemoClass);
        action_NEW_N->setObjectName(QStringLiteral("action_NEW_N"));
        action_O = new QAction(TextNodeDemoClass);
        action_O->setObjectName(QStringLiteral("action_O"));
        action_S = new QAction(TextNodeDemoClass);
        action_S->setObjectName(QStringLiteral("action_S"));
        action_A = new QAction(TextNodeDemoClass);
        action_A->setObjectName(QStringLiteral("action_A"));
        action_X = new QAction(TextNodeDemoClass);
        action_X->setObjectName(QStringLiteral("action_X"));
        action_N = new QAction(TextNodeDemoClass);
        action_N->setObjectName(QStringLiteral("action_N"));
        action_T = new QAction(TextNodeDemoClass);
        action_T->setObjectName(QStringLiteral("action_T"));
        action_C = new QAction(TextNodeDemoClass);
        action_C->setObjectName(QStringLiteral("action_C"));
        action_W = new QAction(TextNodeDemoClass);
        action_W->setObjectName(QStringLiteral("action_W"));
        action_F = new QAction(TextNodeDemoClass);
        action_F->setObjectName(QStringLiteral("action_F"));
        action_S_2 = new QAction(TextNodeDemoClass);
        action_S_2->setObjectName(QStringLiteral("action_S_2"));
        action_A_2 = new QAction(TextNodeDemoClass);
        action_A_2->setObjectName(QStringLiteral("action_A_2"));
        centralWidget = new QWidget(TextNodeDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 0, 761, 891));
        TextNodeDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TextNodeDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 761, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        TextNodeDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TextNodeDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TextNodeDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TextNodeDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TextNodeDemoClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(action_NEW_N);
        menu->addAction(action_O);
        menu->addAction(action_S);
        menu->addAction(action_A);
        menu->addAction(action_X);
        menu_2->addAction(action_N);
        menu_2->addAction(action_T);
        menu_2->addAction(action_C);
        menu_3->addAction(action_W);
        menu_3->addAction(action_F);
        menu_4->addAction(action_S_2);
        menu_5->addAction(action_A_2);

        retranslateUi(TextNodeDemoClass);

        QMetaObject::connectSlotsByName(TextNodeDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *TextNodeDemoClass)
    {
        TextNodeDemoClass->setWindowTitle(QApplication::translate("TextNodeDemoClass", "TextNodeDemo", 0));
        action_NEW_N->setText(QApplication::translate("TextNodeDemoClass", "\346\226\260\345\273\272(&N)", 0));
        action_NEW_N->setShortcut(QApplication::translate("TextNodeDemoClass", "Ctrl+N", 0));
        action_O->setText(QApplication::translate("TextNodeDemoClass", "\346\211\223\345\274\200\357\274\210O\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_O->setToolTip(QApplication::translate("TextNodeDemoClass", "\346\211\223\345\274\200\357\274\210O\357\274\211", 0));
#endif // QT_NO_TOOLTIP
        action_O->setShortcut(QApplication::translate("TextNodeDemoClass", "Ctrl+O", 0));
        action_S->setText(QApplication::translate("TextNodeDemoClass", "\344\277\235\345\255\230\357\274\210S\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_S->setToolTip(QApplication::translate("TextNodeDemoClass", "\344\277\235\345\255\230", 0));
#endif // QT_NO_TOOLTIP
        action_S->setShortcut(QApplication::translate("TextNodeDemoClass", "Ctrl+S", 0));
        action_A->setText(QApplication::translate("TextNodeDemoClass", "\345\217\246\345\255\230\344\270\272\357\274\210A\357\274\211", 0));
        action_X->setText(QApplication::translate("TextNodeDemoClass", "\351\200\200\345\207\272\357\274\210X\357\274\211", 0));
        action_N->setText(QApplication::translate("TextNodeDemoClass", "\346\222\244\351\224\200\357\274\210N\357\274\211", 0));
        action_N->setShortcut(QApplication::translate("TextNodeDemoClass", "Ctrl+Z", 0));
        action_T->setText(QApplication::translate("TextNodeDemoClass", "\345\211\252\345\210\207\357\274\210T\357\274\211", 0));
        action_T->setShortcut(QApplication::translate("TextNodeDemoClass", "Ctrl+X", 0));
        action_C->setText(QApplication::translate("TextNodeDemoClass", "\345\244\215\345\210\266\357\274\210C\357\274\211", 0));
        action_C->setShortcut(QApplication::translate("TextNodeDemoClass", "Ctrl+C", 0));
        action_W->setText(QApplication::translate("TextNodeDemoClass", "\350\207\252\345\212\250\346\215\242\350\241\214\357\274\210W\357\274\211", 0));
        action_F->setText(QApplication::translate("TextNodeDemoClass", "\345\255\227\344\275\223\357\274\210F\357\274\211", 0));
        action_S_2->setText(QApplication::translate("TextNodeDemoClass", "\347\212\266\346\200\201\346\240\217\357\274\210S\357\274\211", 0));
        action_A_2->setText(QApplication::translate("TextNodeDemoClass", "\345\205\263\344\272\216\350\256\260\344\272\213\346\234\254\357\274\210A\357\274\211", 0));
        menu->setTitle(QApplication::translate("TextNodeDemoClass", "\346\226\207\344\273\266", 0));
        menu_2->setTitle(QApplication::translate("TextNodeDemoClass", "\347\274\226\350\276\221", 0));
        menu_3->setTitle(QApplication::translate("TextNodeDemoClass", "\346\240\274\345\274\217", 0));
        menu_4->setTitle(QApplication::translate("TextNodeDemoClass", "\346\237\245\347\234\213", 0));
        menu_5->setTitle(QApplication::translate("TextNodeDemoClass", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class TextNodeDemoClass: public Ui_TextNodeDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTNODEDEMO_H
