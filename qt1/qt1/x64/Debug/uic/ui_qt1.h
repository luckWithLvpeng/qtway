/********************************************************************************
** Form generated from reading UI file 'qt1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT1_H
#define UI_QT1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qt1Class
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QPushButton *pushButton;
    QLabel *label1;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addBtn;
    QFrame *frame;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget;

    void setupUi(QWidget *qt1Class)
    {
        if (qt1Class->objectName().isEmpty())
            qt1Class->setObjectName(QStringLiteral("qt1Class"));
        qt1Class->resize(802, 712);
        qt1Class->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(qt1Class);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(qt1Class);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QLatin1String("background:rgb(170, 170, 127) url(:/img/bbb.png) no-repeat center center;\n"
""));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 110, 300, 100));
        pushButton->setStyleSheet(QLatin1String("background: rgba(12,32,43,.8);\n"
"width: 300px;\n"
"height: 200px;\n"
"color: #fff;\n"
"border: 3px solid red;\n"
"border-radius: 50%;\n"
"font-size:40px;"));
        label1 = new QLabel(widget);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setGeometry(QRect(230, 50, 271, 41));

        verticalLayout->addWidget(widget);

        tabWidget = new QTabWidget(qt1Class);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setStyleSheet(QLatin1String("#tab{\n"
"	background: rgb(170, 170, 127);\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(tab);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        addBtn = new QPushButton(tab);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setStyleSheet(QLatin1String("#addBtn {\n"
"\n"
"color: red;\n"
"background: rgba(23,32,43,.5)\n"
"}"));

        horizontalLayout_3->addWidget(addBtn);

        frame = new QFrame(tab);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(frame);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setStyleSheet(QLatin1String("QHeaderView                    \n"
"{\n"
"    background:blue;       \n"
"}\n"
"\n"
"\n"
"QHeaderView::section           \n"
"{\n"
"    font-size:14px;                \n"
"    font-family:\"Microsoft YaHei\"; \n"
"    color:#FFFFFF;                 \n"
" \n"
"    background:#60669B;            \n"
"    border:none;                  \n"
"    text-align:left;               \n"
" \n"
" \n"
"    min-height:49px;               \n"
"    max-height:49px;               \n"
" \n"
"    margin-left:0px;              \n"
"    padding-left:0px;              \n"
"}"));
        tableView->setSelectionMode(QAbstractItemView::MultiSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setDefaultSectionSize(100);
        tableView->horizontalHeader()->setMinimumSectionSize(50);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableView);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableWidget = new QTableWidget(tab_3);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem34);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setStyleSheet(QLatin1String("QHeaderView                    \n"
"{\n"
"    background:blue;     \n"
"}\n"
"\n"
"\n"
"QHeaderView::section           \n"
"{\n"
"        font-size:20px;                \n"
"    font-family:\"Microsoft YaHei\"; \n"
" 	   color:#FFFFFF;             \n"
" background:#60669B;                     \n"
"      text-align:top;           \n"
"   	height: 50px;  \n"
"	border: 1px solid #adf;            \n"
" \n"
"    margin-left:20px;              \n"
"    padding-left:20px; \n"
"	border-color:  red;   \n"
"    border-right:node;\n"
"}\n"
"\n"
"\n"
"QTableWidget              \n"
"{\n"
"	qproperty-showGrid: false;\n"
"qproperty-gridStyle: 1px solid red;\n"
"    background:green;                \n"
" \n"
"    font-size:30px;               \n"
"    font-family:\"Microsoft YaHei\";\n"
"    color:#aaa;\n"
"	border-right: 1px solid red;                \n"
"}\n"
"\n"
"\n"
"QTableWidget::item                \n"
"{\n"
"    border: 1px solid red; \n"
"	border-right: none;\n"
"}\n"
""));
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->horizontalHeader()->setStretchLastSection(false);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tableWidget);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(qt1Class);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qt1Class);
    } // setupUi

    void retranslateUi(QWidget *qt1Class)
    {
        qt1Class->setWindowTitle(QApplication::translate("qt1Class", "qt1", Q_NULLPTR));
        pushButton->setText(QApplication::translate("qt1Class", "PushButton", Q_NULLPTR));
        label1->setText(QApplication::translate("qt1Class", "TextLabel", Q_NULLPTR));
        addBtn->setText(QApplication::translate("qt1Class", "\346\267\273\345\212\240", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("qt1Class", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("qt1Class", "Tab 2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("qt1Class", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("qt1Class", "name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("qt1Class", "wod ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("qt1Class", "OK", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("qt1Class", "D", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("qt1Class", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("qt1Class", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("qt1Class", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("qt1Class", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("qt1Class", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("qt1Class", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 1);
        ___qtablewidgetitem11->setText(QApplication::translate("qt1Class", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 2);
        ___qtablewidgetitem12->setText(QApplication::translate("qt1Class", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 3);
        ___qtablewidgetitem13->setText(QApplication::translate("qt1Class", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(0, 4);
        ___qtablewidgetitem14->setText(QApplication::translate("qt1Class", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(1, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(1, 1);
        ___qtablewidgetitem16->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(1, 2);
        ___qtablewidgetitem17->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(1, 3);
        ___qtablewidgetitem18->setText(QApplication::translate("qt1Class", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(1, 4);
        ___qtablewidgetitem19->setText(QApplication::translate("qt1Class", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(2, 0);
        ___qtablewidgetitem20->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(2, 1);
        ___qtablewidgetitem21->setText(QApplication::translate("qt1Class", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(2, 2);
        ___qtablewidgetitem22->setText(QApplication::translate("qt1Class", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(2, 3);
        ___qtablewidgetitem23->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(2, 4);
        ___qtablewidgetitem24->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(3, 0);
        ___qtablewidgetitem25->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(3, 1);
        ___qtablewidgetitem26->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(3, 2);
        ___qtablewidgetitem27->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(3, 3);
        ___qtablewidgetitem28->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(3, 4);
        ___qtablewidgetitem29->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(4, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(4, 1);
        ___qtablewidgetitem31->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(4, 2);
        ___qtablewidgetitem32->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(4, 3);
        ___qtablewidgetitem33->setText(QApplication::translate("qt1Class", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(4, 4);
        ___qtablewidgetitem34->setText(QApplication::translate("qt1Class", "23", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("qt1Class", "\351\241\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qt1Class: public Ui_qt1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT1_H
