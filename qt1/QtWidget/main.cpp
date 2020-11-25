#include "QtWidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWidget w;
	w.resize(1400, 1000);
    w.show();
    return a.exec();
}
