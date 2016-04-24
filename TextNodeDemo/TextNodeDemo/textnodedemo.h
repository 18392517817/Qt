#ifndef TEXTNODEDEMO_H
#define TEXTNODEDEMO_H

#include <QtWidgets/QMainWindow>
#include "ui_textnodedemo.h"

//
#include<QtWidgets/QMessageBox.h>
#include<QtWidgets/QFileDialog.h>
#include<QFile>
#include<qtextstream.h>
#include<qtextedit.h>
#include<qtextcursor.h>
class TextNodeDemo :public QMainWindow  //public QTextEdit
{
	Q_OBJECT


public:
	TextNodeDemo(QWidget *parent = 0);
	~TextNodeDemo();
	//槽函数

public slots:
	void PushButtonClicked();
	void New();
	void Open();//打开
	void Save();//保存
	void SaveAs();//另存为
	void Exit();
private slots:
void documentWasModified();//文件被更改时，窗口显示更改状态
private:
	Ui::TextNodeDemoClass ui;
	//
	QString FileName;//存储文件全名
	QTextEdit * mini_text; //Edit
	bool isUntitled;//作为当前文件是否被保存到硬盘上的标志
	QTextEdit * Qte;
};

#endif // TEXTNODEDEMO_H
