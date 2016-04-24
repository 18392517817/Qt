#include "mdichild.h"

#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<QFileInfo>
#include<QApplication>
#include<QFileDialog>
#include<QCloseEvent>
#include<QPushButton>



MdiChild::MdiChild(QMainWindow *parent) :QWidget(parent)// QTextEdit(parent)
{

    setAttribute(Qt::WA_DeleteOnClose);

    isUntitled = true;

}


void MdiChild::newFile()
{

    static int sequenceNumber = 1;

    isUntitled=true;
    curFile=tr("未命名文档%1.txt").arg(sequenceNumber++);



    setWindowTitle(curFile+"[*]"+ tr("- 多文档编辑器"));

    connet(document(),SIGNAL(contentsChanged()),this,SLOT(documentWasModified());

}


void MdiChild::documentWasModified()
{
    setWindowModified(document()->isModified());


}

void MdiChild::loadFile(const QString &fileName)
{
    //新建QFile对象
    QFile file(fileName);
    //只读打开，出错提示，并返回flase
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
       QMessageBox::warning(this,tr("多文档编辑器:"),tr("无法读取文件 %1:\n%2.:")\
                             .arg(fileName).arg(file.errorString()));
      //   QMessageBox::warning(this, u8"多文档编辑器", u8"无法读取文件 .");


        return false;
    }

    //新建文本流对象
    QTextStream in(&file);
    //设置鼠标状态为等待状态
    QApplication::setOverrideCursor(Qt::WaitCursor);
    //读取文件所有内容，并添加到编辑器中
    setPlainText(in.readAll());
    //恢复鼠标状态
    QApplication::restoreOverrideCursor();
    //设置当前文件
    setCurrentFile(fileName);
    connect(document(),SIGNAL(contentsChange()),this,SLOT(documentWasModified());

    return true;
}

void MdiChild::setCurrentFile(const QString &fileName)
{

    //canonicalFilePath()去除路经中的符号链接，"."和".."等符号
    curFile=QFileInfo(fileName).canonicalFilePath();
    //文件以及被保存
    isUntitled=false;
   //文档未更改
    document()->setModified(false);
    //窗口不显示被更改标记
    setWindowModified(false);

    //设置窗口标题   userFriendlyCurrentFile()返回文件名
    setWindowTitle(userFriendlyCurrentFile()+"[*]");

}


QString MdiChild::userFriendlyCurrentFile()
{
    //从路经中读取文件名
    return QFileInfo(curfile).fileName();

}

bool MdiChild::save()
{
    if(isUntitled)
    {
        return saveAs();
    }
    else
    {
        return saveFile(curFile);
    }

}

bool MdiChild::saveAs()
{
    QString fileName=QFileDialog::getSaveFileName(this, tr("另存为"),curFile);
    //获取文件路经，为空则返回flase,否则保存文件
   if(fileName.isEmpty())
   {
       return false;
   }

   return saveFile(fileName);

}

bool MdiChild::saveFile(const QString &fileName)
{
    //新建QFile对象
    QFile file(fileName);
    //只读打开，出错提示，并返回flase
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, tr("多文档编辑器") , tr("无法读取文件 ."));

        return false;
    }

    QTextStream out(&file);
    QApplication::setOverrideCursor(Qt::WaitCursor);
    //以纯文本输入
    out<<toPlainText();
    QApplication::restoreOverrideCursor();
    setCurentFile(fileName);
    return true;

}
//关闭操作
void MdiChild::closeEvent(QCloseEvent *event)
{
    //
    if(maybeSave())
    {
        event->accept();
    }
    else
    {
        event->ignore();
    }
}

void MdiChild::maybeSave()
{
    if(document()->isModified())
    {
        QMessageBox box;
        box.setWindowTitle(tr("多文档编辑器"));
        box.setText( tr("是否保存更改？");
        box.setIcon(QMessageBox::Warning);
        //添加按钮
        QPushButton *yesBtn=box.addButton( tr("是（&Y）") ,QMessageBox::YesRole);
        box.addButton( tr("否(&N)") ,QMessageBox::NoRole);
        QPushButton *cancelBtn=box.addButton( tr("取消"),QMessageBox::RejectRole);
        //弹出对话框
        box.exec();
        if(box.clickedButton()==yesBtn)
        {
            return save();

        }
        else if(box.clickedButton()==cancelBtn)
        {
            return false;
        }
    }
    //文档未更改
    return true;

}








































