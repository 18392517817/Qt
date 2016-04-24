#include "textnodedemo.h"
//#include<QtWidgets/qmessagebox.h>
//#include<QtWidgets/QFileDialog>
 
TextNodeDemo::TextNodeDemo(QWidget *parent)
	:QMainWindow(parent) //QTextEdit(parent)
{
	ui.setupUi(this);
	//
	QObject::connect(ui.action_O, SIGNAL(triggered()), this, SLOT(Open()));
	QObject::connect(ui.action_S, SIGNAL(triggered()), this, SLOT(Save()));
	QObject::connect(ui.action_A, SIGNAL(triggered()), this, SLOT(SaveAs()));
	QObject::connect(ui.action_X, SIGNAL(triggered()), this, SLOT(Exit()));
	QObject::connect(ui.action_NEW_N, SIGNAL(triggered()), this, SLOT(New()));
}

TextNodeDemo::~TextNodeDemo()
{

}

void TextNodeDemo::documentWasModified()
{
	setWindowModified(Qte->document()->isModified());
}

void TextNodeDemo::New()
{
	////isModified方法可以来检查document是否改变
 //
	// if (mini_text->document()->isModified())
	// { 
	//	QMessageBox::StandardButton button = QMessageBox::information(this,\
	//		QStringLiteral("尚未保存"), QStringLiteral("是否要保存?"), \
	//		QMessageBox::Save |\
	//		QMessageBox::Discard |\
	//		QMessageBox::Cancel);
	//	switch (button)
	//	{
	//	case QMessageBox::Save:{
	//							   Save();
	//							   if (mini_text->document()-> isModified()){
	//								    return;
	//							 }
	//	}
	//	case QMessageBox::Cancel:{
	//								 return;
	//	}
	//	case QMessageBox::Discard:{
	//								  break;
	//	}
	//	}
	//  }
	//mini_text->clear();

	//设置窗口编号，
	static int sequenceNumber = 1;
	//新建文件未保存过
	isUntitled = true;
	//设置窗口标题
	FileName = QFileDialog::getSaveFileName(this, \
		QStringLiteral("新建文件"), \
		QStringLiteral("D://新建文本文档.txt"), \
		QStringLiteral("文本文件(*.txt)")).arg(sequenceNumber++);
	//
  	QObject::connect(Qte->document(), SIGNAL(contentChange()), this, SLOT(documentWasModified));

}

void TextNodeDemo::PushButtonClicked()
{
	//QMessageBox msg;
	////QStringLiteral处理中文乱码问题
	//msg.setText(QStringLiteral("你点击了pushButton 按钮"));
	//msg.exec() ;
}

void TextNodeDemo::Open()
{
	//QFileDialog
	FileName = QFileDialog::getOpenFileName(this);
	
	if (!FileName.isEmpty())
	{
		QFile file(FileName);//文件读写设备
		if (file.open(QFile::ReadOnly|QFile::Text))
		{
			//专门进行文件读写的函数
			QTextStream getText(&file);
			//读取当前文件的所有信息  返回所有的内容
			QString cononct = getText.readAll();
			//显示在控件上
			ui.plainTextEdit->setPlainText(cononct);
			
			setWindowTitle(FileName+QStringLiteral("记事本"));
		}
	}
}

void TextNodeDemo::Save()
{
	//文件已存在，不弹对话框
	//文件是新文件，弹对话框

	if (FileName.isEmpty())
	{
		FileName = QFileDialog::getSaveFileName(this, \
			QStringLiteral("保存文件"),\
			QStringLiteral("D://新建文本文档.txt"), \
			QStringLiteral("文本文件(*.txt)"));
	}
	QFile file(FileName);
	if (file.open(QFile::WriteOnly | QFile::Text))
	{
		QTextStream SaveText(&file);
		QString contect = ui.plainTextEdit->toPlainText();
		SaveText << contect;

		setWindowTitle(FileName+QStringLiteral("记事本"));
	}
}

void TextNodeDemo::SaveAs()
{
	//
	QString file_name = QFileDialog::getSaveFileName(this, QStringLiteral("另保存文件"),\
		QStringLiteral("D://新建文本文档.txt"), \
		QStringLiteral("文本文件(*.txt))"));
	if (!file_name.isEmpty()){
		QFile file(file_name);
		if (!file.open(QFile::WriteOnly | QFile::Text)){
			QMessageBox::critical(this, QStringLiteral("错误"),\
				QStringLiteral("不能打开文件"));
			return;
		}
		
		QTextStream SaveText(&file);
		QString contect = ui.plainTextEdit->toPlainText();
		SaveText << contect;

		setWindowTitle(FileName + QStringLiteral("记事本"));
	 
	}
}

void TextNodeDemo::Exit()
{
	this->close();
}