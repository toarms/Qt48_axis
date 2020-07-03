#ifndef AXIS_H
#define AXIS_H

#include <QtGui/QMainWindow>
#include "ui_axis.h"

class axis : public QMainWindow
{
	Q_OBJECT

public:
	axis(QWidget *parent = 0, Qt::WFlags flags = 0);
	~axis();

private:
	Ui::axisClass ui;
};

#endif // AXIS_H
