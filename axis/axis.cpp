#include "axis.h"
#include "xy.h"

axis::axis(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	setCentralWidget(new XY(this));
}

axis::~axis()
{

}
