#include "qt2.h"

#include <QMenuBar>
#include <QMenu>
#include <QString>
#include <QStatusBar>
#include <QLabel>
#include <QToolBar>
#include <QDockWidget>
#include <QTextEdit>
#include <QDialog>

qt2::qt2(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	createMenu();
	createToolBar();
	createStatusBar();
	createDockWight();
	createCenterWidget();

	connect(this->actionOpenDialog, &QAction::triggered, this, [=]() {
		QDialog * tmp = new QDialog(this);
		tmp->setAttribute(Qt::WA_DeleteOnClose);
		tmp->resize(600, 400);
		tmp->show();
	});

	connect(this->actionOpenDialogSync, &QAction::triggered, this, [=]() {
		QDialog * tmp = new QDialog(this);
		tmp->resize(600, 400);
		tmp->setAttribute(Qt::WA_DeleteOnClose);
		tmp->exec();
	});
}

void qt2::createMenu()
{
	QMenuBar * menuBar = new QMenuBar(this);
	setMenuBar(menuBar);
	QMenu * menuFile = new QMenu("文件", menuBar);
	
	this->actionNew = menuFile->addAction(QString::fromUtf8("新建"));
	this->actionClose = menuFile->addAction(QString::fromUtf8("你好"));
	this->actionOpen = menuFile->addAction(QString::fromUtf8("打开"));

	QMenu * menuEdit = new QMenu("编辑", menuBar);
	this->actionOption = menuEdit->addAction("选项");
	this->actionEdit = menuEdit->addAction("编辑");

	menuBar->addMenu(menuFile);
	menuBar->addMenu(menuEdit);

}
void qt2::createToolBar()
{
	QToolBar* toolBar = new QToolBar();
	addToolBar(Qt::LeftToolBarArea, toolBar);
	toolBar->addAction(this->actionNew);
	toolBar->addAction(this->actionClose);
	toolBar->addAction(this->actionEdit);
	this->actionOpenDialog = toolBar->addAction("打开非模态");
	this->actionOpenDialogSync = toolBar->addAction("打开模态");
	toolBar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
	toolBar->setFloatable(false);
}
void qt2::createStatusBar()
{
	QStatusBar* statusBar = new QStatusBar(this);
	setStatusBar(statusBar);
	QLabel* status = new QLabel("提示信息",statusBar);
	statusBar->addWidget(status);
	QLabel* fileInfo = new QLabel("文件信息",statusBar);
	statusBar->addPermanentWidget(fileInfo);
}
void qt2::createDockWight()
{
	QDockWidget* dockWidget = new QDockWidget("浮动窗口", this);
	addDockWidget(Qt::BottomDockWidgetArea, dockWidget);
	dockWidget->setAllowedAreas(Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);
}
void qt2::createCenterWidget()
{
	QTextEdit* textEdit = new QTextEdit("文本编辑",this);
	setCentralWidget(textEdit);
}
