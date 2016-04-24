#include "textnodedemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TextNodeDemo w;
	w.show();
	return a.exec();
}
