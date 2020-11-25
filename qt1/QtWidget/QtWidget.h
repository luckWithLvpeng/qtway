#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidget.h"

class QtWidget : public QMainWindow
{
    Q_OBJECT

public:
    QtWidget(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtWidgetClass ui;
	void addActionToMenu(QMenu *menu, int length);
};
