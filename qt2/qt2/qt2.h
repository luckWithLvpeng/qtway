#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qt2.h"
#include <QAction>

class qt2 : public QMainWindow
{
    Q_OBJECT

public:
    qt2(QWidget *parent = Q_NULLPTR);

private:
    Ui::qt2Class ui;

	// actions
	QAction* actionNew;
	QAction* actionClose;
	QAction* actionOpen;
	QAction* actionOption;
	QAction* actionEdit;
	QAction* actionOpenDialog;
	QAction* actionOpenDialogSync;

	// 创建部件
	void createMenu();
	void createToolBar();
	void createStatusBar();
	void createDockWight();
	void createCenterWidget();
};
