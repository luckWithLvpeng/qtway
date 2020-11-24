#include "qt1.h"
#include <QTabWidget>
#include <QString>
#include <QLabel>
#include <QPushButton>
#include <QStandardItemModel>
#include <QTableWidget>
#include <QAbstractItemView>
qt1::qt1(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(this->ui.tabWidget, &QTabWidget::tabCloseRequested, this, [=](int index) {
		this->ui.tabWidget->removeTab(index);
	});
	connect(this->ui.addBtn, &QPushButton::clicked, this, [=]() {
		QWidget * tmp = new QWidget(this);
		int a = ui.tabWidget->count();
		this->ui.tabWidget->addTab(tmp, QString("tab%0").arg(a+1));
	});
	this->setWindowIcon(QIcon(QApplication::style()->standardIcon(QStyle::SP_TitleBarMenuButton)));
	ui.pushButton->setIcon(QApplication::style()->standardIcon(QStyle::SP_TitleBarCloseButton));
	//QStandardItemModel* model = new QStandardItemMode	// l();
	QStandardItemModel *model = new QStandardItemModel();
	//model->setHorizontalHeaderLabels({ "ID","username", "City","Classify"});
	//model->setHorizontalHeaderLabels({ "ID","username", "City","Classify", "Score", "Sing", "描述" });
	// 自适	// 应
	//this->ui.tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	//model->setHeaderData(0, Qt::Horizontal, tr("DCM_StudyID"));
	//model->setHeaderData(1, Qt::Horizontal, tr("DCM_PatientID"));
	//model->setHeaderData(2, Qt::Horizontal, tr("DCM_PatientName"));
	//model->setHeaderData(3, Qt::Horizontal, tr("DCM_PatientSex"));

	this->ui.tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	this->ui.tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	this->ui.tableView->setFocusPolicy(Qt::NoFocus);
	this->ui.tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

	//this->ui.tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
	//this->ui.tableView->setColumnWidth(0, 200);

	//for (int row = 0; row < 4; ++row) {
	//	for (int column = 0; column < 4; ++column) {
	//		QStandardItem *item = new QStandardItem(QString("row %0, column %1").arg(row).arg(column));
	//		model->setItem(row, column, item);
	//	}
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	/* 加载第一列(ID)数据 */
	//	model->setItem(i, 0, new QStandardItem(QString("100%1").arg(i)));
	//	/* 加载第二列(User Name)数据 */
	//	model->setItem(i, 1, new QStandardItem(QString("User%1").arg(i)));
	//	/* 加载第三列(City)数据 */
	//	model->setItem(i, 2, new QStandardItem("Shanghai"));
	//	/* 加载第四列(Classify)数据 */
	//	model->setItem(i, 3, new QStandardItem("Engineer"));
	//	/* 加载第五列(Score)数据 */
	//	model->setItem(i, 4, new QStandardItem("80"));

	//	model->setItem(i, 5, new QStandardItem("Hello world!"));
	//	model->setItem(i, 6, new QStandardItem("这是一个很长的描述"));
	//	// }
	this->ui.tableView->setModel(model);
	this->ui.tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	//this->ui.tableView->setStyleSheet("QTableView {background: red;} QHeaderView{ background:green }");
}
