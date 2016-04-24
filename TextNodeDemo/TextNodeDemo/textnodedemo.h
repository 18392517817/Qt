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
	//�ۺ���

public slots:
	void PushButtonClicked();
	void New();
	void Open();//��
	void Save();//����
	void SaveAs();//���Ϊ
	void Exit();
private slots:
void documentWasModified();//�ļ�������ʱ��������ʾ����״̬
private:
	Ui::TextNodeDemoClass ui;
	//
	QString FileName;//�洢�ļ�ȫ��
	QTextEdit * mini_text; //Edit
	bool isUntitled;//��Ϊ��ǰ�ļ��Ƿ񱻱��浽Ӳ���ϵı�־
	QTextEdit * Qte;
};

#endif // TEXTNODEDEMO_H
