#include "qt2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qt2 w;
    w.show();
    return a.exec();
}
