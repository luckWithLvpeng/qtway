#pragma once

#include <QtWidgets/QWidget>
#include "ui_qt1.h"

class qt1 : public QWidget
{
    Q_OBJECT

public:
    qt1(QWidget *parent = Q_NULLPTR);
//public slots:
//	void close(int);
private:
    Ui::qt1Class ui;
};
