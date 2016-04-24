#ifndef MDICHILD_H
#define MDICHILD_H

#include <QWidget>
#include<QTextEdit>
#include <QMainWindow>

class MdiChild : public QWidget //public QTextEdit
{
    Q_OBJECT
public:
   // friend QTextEdit;
    explicit MdiChild(QWidget *parent = 0);
    //fjl
    void newFile();                         //新建操作
    bool loadFile(const QString &fileName); //加载文件
    bool save();
    bool saveAs();
    bool saveFile(const QString &fileName);
    QString userFriendlyCurrentFile();      //提取文件名
    QString currentFile(){return curFile;}   //返回当前文件路径

protected:
    void closeEvent(QCloseEvent *event);    //关闭文件
//signals:

private slots:
    void documentWasModified();                    //文档被更改时，窗口显示更改状态标记

private:
    bool    maybeSave();                           //是否需要保存
    void    setCurentFile(const QString &fileName);//设置当前文件
    QString curFile;                               //保存当前路径
    QString isUntitled;                            //作为当前文件是否被保存到硬盘上的标记
};

#endif // MDICHILD_H
