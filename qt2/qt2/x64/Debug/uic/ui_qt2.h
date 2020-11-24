/********************************************************************************
** Form generated from reading UI file 'qt2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT2_H
#define UI_QT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qt2Class
{
public:
    QWidget *centralWidget;

    void setupUi(QMainWindow *qt2Class)
    {
        if (qt2Class->objectName().isEmpty())
            qt2Class->setObjectName(QStringLiteral("qt2Class"));
        qt2Class->resize(600, 400);
        centralWidget = new QWidget(qt2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        qt2Class->setCentralWidget(centralWidget);

        retranslateUi(qt2Class);

        QMetaObject::connectSlotsByName(qt2Class);
    } // setupUi

    void retranslateUi(QMainWindow *qt2Class)
    {
        qt2Class->setWindowTitle(QApplication::translate("qt2Class", "qt2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qt2Class: public Ui_qt2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT2_H
