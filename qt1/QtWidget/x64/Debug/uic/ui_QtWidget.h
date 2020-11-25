/********************************************************************************
** Form generated from reading UI file 'QtWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGET_H
#define UI_QTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QPushButton *btn_openContent;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetClass)
    {
        if (QtWidgetClass->objectName().isEmpty())
            QtWidgetClass->setObjectName(QStringLiteral("QtWidgetClass"));
        QtWidgetClass->resize(1388, 894);
        centralWidget = new QWidget(QtWidgetClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        btn_openContent = new QPushButton(groupBox);
        btn_openContent->setObjectName(QStringLiteral("btn_openContent"));
        btn_openContent->setGeometry(QRect(10, 90, 150, 46));

        verticalLayout->addWidget(groupBox);

        QtWidgetClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1388, 37));
        QtWidgetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtWidgetClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtWidgetClass->setStatusBar(statusBar);

        retranslateUi(QtWidgetClass);

        QMetaObject::connectSlotsByName(QtWidgetClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetClass)
    {
        QtWidgetClass->setWindowTitle(QApplication::translate("QtWidgetClass", "QtWidget", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QtWidgetClass", "\351\274\240\346\240\207", Q_NULLPTR));
        btn_openContent->setText(QApplication::translate("QtWidgetClass", "\344\270\212\344\270\213\346\226\207\350\217\234\345\215\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetClass: public Ui_QtWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGET_H
