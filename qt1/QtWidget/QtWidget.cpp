#include "QtWidget.h"
#include "QtWidgets"

QtWidget::QtWidget(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	connect(ui.btn_openContent, &QPushButton::clicked, this, [=]() {
		QDialog * tmp = new QDialog();
		tmp->setAttribute(Qt::WA_DeleteOnClose);
		tmp->setContextMenuPolicy(Qt::CustomContextMenu);
		QMenu *menu = new QMenu();
		QMenu *subMenu = new QMenu("Sub Menu", menu);
		addActionToMenu(subMenu, 5);
		menu->addMenu(subMenu);
		addActionToMenu(menu, 5);
		connect(tmp, &QDialog::customContextMenuRequested,
			menu, [=] {
			menu->move(QCursor::pos());
			menu->show();
		});
		tmp->exec();
	});
}
void QtWidget::addActionToMenu(QMenu *menu, int length)
{
	QList<QAction *> acs;
	for (int i = 0; i < length; i++) {
		acs << new QAction(QString("Test Menu Item %1").arg(i), menu);
	}
	menu->addActions(acs);
}
