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
	////isModified�������������document�Ƿ�ı�
 //
	// if (mini_text->document()->isModified())
	// { 
	//	QMessageBox::StandardButton button = QMessageBox::information(this,\
	//		QStringLiteral("��δ����"), QStringLiteral("�Ƿ�Ҫ����?"), \
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

	//���ô��ڱ�ţ�
	static int sequenceNumber = 1;
	//�½��ļ�δ�����
	isUntitled = true;
	//���ô��ڱ���
	FileName = QFileDialog::getSaveFileName(this, \
		QStringLiteral("�½��ļ�"), \
		QStringLiteral("D://�½��ı��ĵ�.txt"), \
		QStringLiteral("�ı��ļ�(*.txt)")).arg(sequenceNumber++);
	//
  	QObject::connect(Qte->document(), SIGNAL(contentChange()), this, SLOT(documentWasModified));

}

void TextNodeDemo::PushButtonClicked()
{
	//QMessageBox msg;
	////QStringLiteral����������������
	//msg.setText(QStringLiteral("������pushButton ��ť"));
	//msg.exec() ;
}

void TextNodeDemo::Open()
{
	//QFileDialog
	FileName = QFileDialog::getOpenFileName(this);
	
	if (!FileName.isEmpty())
	{
		QFile file(FileName);//�ļ���д�豸
		if (file.open(QFile::ReadOnly|QFile::Text))
		{
			//ר�Ž����ļ���д�ĺ���
			QTextStream getText(&file);
			//��ȡ��ǰ�ļ���������Ϣ  �������е�����
			QString cononct = getText.readAll();
			//��ʾ�ڿؼ���
			ui.plainTextEdit->setPlainText(cononct);
			
			setWindowTitle(FileName+QStringLiteral("���±�"));
		}
	}
}

void TextNodeDemo::Save()
{
	//�ļ��Ѵ��ڣ������Ի���
	//�ļ������ļ������Ի���

	if (FileName.isEmpty())
	{
		FileName = QFileDialog::getSaveFileName(this, \
			QStringLiteral("�����ļ�"),\
			QStringLiteral("D://�½��ı��ĵ�.txt"), \
			QStringLiteral("�ı��ļ�(*.txt)"));
	}
	QFile file(FileName);
	if (file.open(QFile::WriteOnly | QFile::Text))
	{
		QTextStream SaveText(&file);
		QString contect = ui.plainTextEdit->toPlainText();
		SaveText << contect;

		setWindowTitle(FileName+QStringLiteral("���±�"));
	}
}

void TextNodeDemo::SaveAs()
{
	//
	QString file_name = QFileDialog::getSaveFileName(this, QStringLiteral("�����ļ�"),\
		QStringLiteral("D://�½��ı��ĵ�.txt"), \
		QStringLiteral("�ı��ļ�(*.txt))"));
	if (!file_name.isEmpty()){
		QFile file(file_name);
		if (!file.open(QFile::WriteOnly | QFile::Text)){
			QMessageBox::critical(this, QStringLiteral("����"),\
				QStringLiteral("���ܴ��ļ�"));
			return;
		}
		
		QTextStream SaveText(&file);
		QString contect = ui.plainTextEdit->toPlainText();
		SaveText << contect;

		setWindowTitle(FileName + QStringLiteral("���±�"));
	 
	}
}

void TextNodeDemo::Exit()
{
	this->close();
}