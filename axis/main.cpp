#include "axis.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	axis w;
	w.show();
	return a.exec();
}
