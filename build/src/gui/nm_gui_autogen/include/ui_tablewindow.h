/********************************************************************************
** Form generated from reading UI file 'tablewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEWINDOW_H
#define UI_TABLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TableWindow
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *TableWindow)
    {
        if (TableWindow->objectName().isEmpty())
            TableWindow->setObjectName("TableWindow");
        TableWindow->resize(797, 508);
        tableWidget = new QTableWidget(TableWindow);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 791, 501));

        retranslateUi(TableWindow);

        QMetaObject::connectSlotsByName(TableWindow);
    } // setupUi

    void retranslateUi(QDialog *TableWindow)
    {
        TableWindow->setWindowTitle(QCoreApplication::translate("TableWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableWindow: public Ui_TableWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEWINDOW_H
