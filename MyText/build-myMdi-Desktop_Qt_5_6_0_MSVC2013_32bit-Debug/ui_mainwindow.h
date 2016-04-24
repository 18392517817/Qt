/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_New;
    QAction *action_Open;
    QAction *action_Save;
    QAction *action_AaveAs;
    QAction *action_Exit;
    QAction *action_Undo;
    QAction *action_Redo;
    QAction *action_Cut;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *action_Close;
    QAction *action_CloseAll;
    QAction *action_Tile;
    QAction *action_Cascade;
    QAction *action_Next;
    QAction *action_Previous;
    QAction *action_About;
    QAction *action_AboutQt;
    QWidget *centralWidget;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_W;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(490, 388);
        action_New = new QAction(MainWindow);
        action_New->setObjectName(QStringLiteral("action_New"));
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        action_AaveAs = new QAction(MainWindow);
        action_AaveAs->setObjectName(QStringLiteral("action_AaveAs"));
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        action_Undo = new QAction(MainWindow);
        action_Undo->setObjectName(QStringLiteral("action_Undo"));
        action_Redo = new QAction(MainWindow);
        action_Redo->setObjectName(QStringLiteral("action_Redo"));
        action_Cut = new QAction(MainWindow);
        action_Cut->setObjectName(QStringLiteral("action_Cut"));
        action_Copy = new QAction(MainWindow);
        action_Copy->setObjectName(QStringLiteral("action_Copy"));
        action_Paste = new QAction(MainWindow);
        action_Paste->setObjectName(QStringLiteral("action_Paste"));
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName(QStringLiteral("action_Close"));
        action_CloseAll = new QAction(MainWindow);
        action_CloseAll->setObjectName(QStringLiteral("action_CloseAll"));
        action_Tile = new QAction(MainWindow);
        action_Tile->setObjectName(QStringLiteral("action_Tile"));
        action_Cascade = new QAction(MainWindow);
        action_Cascade->setObjectName(QStringLiteral("action_Cascade"));
        action_Next = new QAction(MainWindow);
        action_Next->setObjectName(QStringLiteral("action_Next"));
        action_Previous = new QAction(MainWindow);
        action_Previous->setObjectName(QStringLiteral("action_Previous"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        action_AboutQt = new QAction(MainWindow);
        action_AboutQt->setObjectName(QStringLiteral("action_AboutQt"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setGeometry(QRect(19, 50, 421, 221));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 490, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_W = new QMenu(menuBar);
        menu_W->setObjectName(QStringLiteral("menu_W"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_W->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addSeparator();
        menu_F->addAction(action_New);
        menu_F->addAction(action_Open);
        menu_F->addAction(action_Save);
        menu_F->addAction(action_AaveAs);
        menu_F->addAction(action_Exit);
        menu_E->addAction(action_Undo);
        menu_E->addAction(action_Redo);
        menu_E->addAction(action_Cut);
        menu_E->addAction(action_Copy);
        menu_E->addAction(action_Paste);
        menu_W->addAction(action_Close);
        menu_W->addAction(action_CloseAll);
        menu_W->addAction(action_Tile);
        menu_W->addAction(action_Cascade);
        menu_W->addAction(action_Next);
        menu_W->addAction(action_Previous);
        menu_H->addAction(action_About);
        menu_H->addAction(action_AboutQt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_New->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266\357\274\210&N\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_New->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", 0));
#endif // QT_NO_TOOLTIP
        action_New->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        action_Open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266\357\274\210&O\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_Open->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", 0));
#endif // QT_NO_TOOLTIP
        action_Open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        action_Save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\357\274\210&S\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_Save->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0));
#endif // QT_NO_TOOLTIP
        action_Save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        action_AaveAs->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272\357\274\210&A\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_AaveAs->setToolTip(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", 0));
#endif // QT_NO_TOOLTIP
        action_Exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\357\274\210&X\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_Exit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
#endif // QT_NO_TOOLTIP
        action_Undo->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200\357\274\210&U\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_Undo->setToolTip(QApplication::translate("MainWindow", "\346\222\244\351\224\200", 0));
#endif // QT_NO_TOOLTIP
        action_Undo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        action_Redo->setText(QApplication::translate("MainWindow", "\346\201\242\345\244\215\357\274\210&R\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_Redo->setToolTip(QApplication::translate("MainWindow", "\346\201\242\345\244\215", 0));
#endif // QT_NO_TOOLTIP
        action_Redo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0));
        action_Cut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207\357\274\210&T\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_Cut->setToolTip(QApplication::translate("MainWindow", "\345\211\252\345\210\207", 0));
#endif // QT_NO_TOOLTIP
        action_Cut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        action_Copy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266\357\274\210&C\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_Copy->setToolTip(QApplication::translate("MainWindow", "\345\244\215\345\210\266", 0));
#endif // QT_NO_TOOLTIP
        action_Copy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        action_Paste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264\357\274\210&P\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_Paste->setToolTip(QApplication::translate("MainWindow", "\347\262\230\350\264\264", 0));
#endif // QT_NO_TOOLTIP
        action_Paste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0));
        action_Close->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\357\274\210&O\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_Close->setToolTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255", 0));
#endif // QT_NO_TOOLTIP
        action_CloseAll->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211\347\252\227\345\217\243\357\274\210&A\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_CloseAll->setToolTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211\347\252\227\345\217\243", 0));
#endif // QT_NO_TOOLTIP
        action_Tile->setText(QApplication::translate("MainWindow", "\345\271\263\351\223\272\357\274\210&T\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_Tile->setToolTip(QApplication::translate("MainWindow", "\345\271\263\351\223\272", 0));
#endif // QT_NO_TOOLTIP
        action_Cascade->setText(QApplication::translate("MainWindow", "\345\261\202\345\217\240\357\274\210&C\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_Cascade->setToolTip(QApplication::translate("MainWindow", "\345\261\202\345\217\240", 0));
#endif // QT_NO_TOOLTIP
        action_Next->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252\357\274\210&X\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_Next->setToolTip(QApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252", 0));
#endif // QT_NO_TOOLTIP
        action_Next->setShortcut(QApplication::translate("MainWindow", "Ctrl+Tab", 0));
        action_Previous->setText(QApplication::translate("MainWindow", "\345\211\215\344\270\200\344\270\252\357\274\210&V\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_Previous->setToolTip(QApplication::translate("MainWindow", "\345\211\215\344\270\200\344\270\252", 0));
#endif // QT_NO_TOOLTIP
        action_Previous->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Backtab", 0));
        action_About->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\357\274\210&A\357\274\211", 0));
#ifndef QT_NO_TOOLTIP
        action_About->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0));
#endif // QT_NO_TOOLTIP
        action_AboutQt->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216Qt(&Q)", 0));
#ifndef QT_NO_TOOLTIP
        action_AboutQt->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216Qt", 0));
#endif // QT_NO_TOOLTIP
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210F\357\274\211", 0));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221\357\274\210E\357\274\211", 0));
        menu_W->setTitle(QApplication::translate("MainWindow", "\347\252\227\345\217\243\357\274\210W\357\274\211", 0));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251\357\274\210H\357\274\211", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
