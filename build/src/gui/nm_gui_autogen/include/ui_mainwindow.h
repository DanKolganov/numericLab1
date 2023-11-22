/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_precision;
    QLabel *label_2;
    QLineEdit *lineEdit_step;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_x;
    QLineEdit *lineEdit_x_start;
    QLineEdit *lineEdit_x_end;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_start;
    QLineEdit *lineEdit_start_x;
    QLineEdit *lineEdit_start_y;
    QLineEdit *lineEdit_last;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_mistake;
    QRadioButton *radioButton_mistake;
    QCustomPlot *plot;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QRadioButton *radioButton_blue;
    QRadioButton *radioButton_red;
    QRadioButton *radioButton_green;
    QRadioButton *radioButton_violet;
    QPushButton *getdata_buttom;
    QComboBox *comboBox;
    QTableWidget *tableWidget;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_n_2;
    QLineEdit *lineEdit_a;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_n_3;
    QLineEdit *lineEdit_b;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_n_4;
    QLineEdit *lineEdit_c;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_n;
    QLineEdit *lineEdit_n;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *button_plot;
    QPushButton *button_table;
    QPushButton *button_clear;
    QPushButton *button_plot_from_file;
    QPushButton *button_save_points;
    QPushButton *HelpButton;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1911, 1031);
        MainWindow->setTabletTracking(false);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 300, 238, 102));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        verticalLayout_2->addWidget(label);

        lineEdit_precision = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_precision->setObjectName("lineEdit_precision");
        lineEdit_precision->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        verticalLayout_2->addWidget(lineEdit_precision);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_step = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_step->setObjectName("lineEdit_step");
        lineEdit_step->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        verticalLayout_2->addWidget(lineEdit_step);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 210, 241, 26));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_x = new QLabel(horizontalLayoutWidget_2);
        label_x->setObjectName("label_x");
        label_x->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout_2->addWidget(label_x);

        lineEdit_x_start = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_x_start->setObjectName("lineEdit_x_start");
        lineEdit_x_start->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0)"));

        horizontalLayout_2->addWidget(lineEdit_x_start);

        lineEdit_x_end = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_x_end->setObjectName("lineEdit_x_end");
        lineEdit_x_end->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_2->addWidget(lineEdit_x_end);

        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(10, 240, 241, 51));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_start = new QLabel(horizontalLayoutWidget_4);
        label_start->setObjectName("label_start");
        label_start->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout_4->addWidget(label_start);

        lineEdit_start_x = new QLineEdit(horizontalLayoutWidget_4);
        lineEdit_start_x->setObjectName("lineEdit_start_x");
        lineEdit_start_x->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_4->addWidget(lineEdit_start_x);

        lineEdit_start_y = new QLineEdit(horizontalLayoutWidget_4);
        lineEdit_start_y->setObjectName("lineEdit_start_y");
        lineEdit_start_y->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_4->addWidget(lineEdit_start_y);

        lineEdit_last = new QLineEdit(horizontalLayoutWidget_4);
        lineEdit_last->setObjectName("lineEdit_last");
        lineEdit_last->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_4->addWidget(lineEdit_last);

        horizontalLayoutWidget_5 = new QWidget(centralwidget);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(10, 470, 263, 51));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_mistake = new QLabel(horizontalLayoutWidget_5);
        label_mistake->setObjectName("label_mistake");
        label_mistake->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout_5->addWidget(label_mistake);

        radioButton_mistake = new QRadioButton(horizontalLayoutWidget_5);
        radioButton_mistake->setObjectName("radioButton_mistake");

        horizontalLayout_5->addWidget(radioButton_mistake);

        plot = new QCustomPlot(centralwidget);
        plot->setObjectName("plot");
        plot->setGeometry(QRect(270, 20, 701, 831));
        plot->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(590, 870, 381, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout->addWidget(label_4);

        radioButton_blue = new QRadioButton(horizontalLayoutWidget);
        radioButton_blue->setObjectName("radioButton_blue");
        radioButton_blue->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout->addWidget(radioButton_blue);

        radioButton_red = new QRadioButton(horizontalLayoutWidget);
        radioButton_red->setObjectName("radioButton_red");
        radioButton_red->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout->addWidget(radioButton_red);

        radioButton_green = new QRadioButton(horizontalLayoutWidget);
        radioButton_green->setObjectName("radioButton_green");
        radioButton_green->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout->addWidget(radioButton_green);

        radioButton_violet = new QRadioButton(horizontalLayoutWidget);
        radioButton_violet->setObjectName("radioButton_violet");
        radioButton_violet->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout->addWidget(radioButton_violet);

        getdata_buttom = new QPushButton(centralwidget);
        getdata_buttom->setObjectName("getdata_buttom");
        getdata_buttom->setGeometry(QRect(50, 530, 161, 32));
        getdata_buttom->setCursor(QCursor(Qt::PointingHandCursor));
        getdata_buttom->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(10, 20, 231, 32));
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)\n"
""));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(980, 20, 911, 841));
        tableWidget->setStyleSheet(QString::fromUtf8("font: 18pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);"));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 90, 191, 26));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_n_2 = new QLabel(layoutWidget_2);
        label_n_2->setObjectName("label_n_2");
        label_n_2->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout_7->addWidget(label_n_2);

        lineEdit_a = new QLineEdit(layoutWidget_2);
        lineEdit_a->setObjectName("lineEdit_a");
        lineEdit_a->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_7->addWidget(lineEdit_a);

        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 130, 191, 26));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_n_3 = new QLabel(layoutWidget_3);
        label_n_3->setObjectName("label_n_3");
        label_n_3->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout_8->addWidget(label_n_3);

        lineEdit_b = new QLineEdit(layoutWidget_3);
        lineEdit_b->setObjectName("lineEdit_b");
        lineEdit_b->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_8->addWidget(lineEdit_b);

        layoutWidget_4 = new QWidget(centralwidget);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(10, 170, 191, 26));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_n_4 = new QLabel(layoutWidget_4);
        label_n_4->setObjectName("label_n_4");
        label_n_4->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout_9->addWidget(label_n_4);

        lineEdit_c = new QLineEdit(layoutWidget_4);
        lineEdit_c->setObjectName("lineEdit_c");
        lineEdit_c->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_9->addWidget(lineEdit_c);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 430, 191, 26));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_n = new QLabel(layoutWidget);
        label_n->setObjectName("label_n");
        label_n->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout_6->addWidget(label_n);

        lineEdit_n = new QLineEdit(layoutWidget);
        lineEdit_n->setObjectName("lineEdit_n");
        lineEdit_n->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_6->addWidget(lineEdit_n);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 410, 189, 17));
        label_3->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 60, 191, 17));
        label_5->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));
        button_plot = new QPushButton(centralwidget);
        button_plot->setObjectName("button_plot");
        button_plot->setGeometry(QRect(270, 870, 229, 24));
        button_plot->setCursor(QCursor(Qt::PointingHandCursor));
        button_plot->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);"));
        button_table = new QPushButton(centralwidget);
        button_table->setObjectName("button_table");
        button_table->setGeometry(QRect(980, 870, 229, 24));
        button_table->setCursor(QCursor(Qt::PointingHandCursor));
        button_table->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));
        button_clear = new QPushButton(centralwidget);
        button_clear->setObjectName("button_clear");
        button_clear->setGeometry(QRect(270, 900, 229, 24));
        button_clear->setCursor(QCursor(Qt::PointingHandCursor));
        button_clear->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);"));
        button_plot_from_file = new QPushButton(centralwidget);
        button_plot_from_file->setObjectName("button_plot_from_file");
        button_plot_from_file->setGeometry(QRect(270, 930, 229, 24));
        button_plot_from_file->setCursor(QCursor(Qt::PointingHandCursor));
        button_plot_from_file->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));
        button_save_points = new QPushButton(centralwidget);
        button_save_points->setObjectName("button_save_points");
        button_save_points->setGeometry(QRect(980, 900, 229, 24));
        button_save_points->setCursor(QCursor(Qt::PointingHandCursor));
        button_save_points->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));
        HelpButton = new QPushButton(centralwidget);
        HelpButton->setObjectName("HelpButton");
        HelpButton->setGeometry(QRect(10, 940, 91, 31));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1911, 18));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\321\207\320\275\320\276\321\201\321\202\321\214 (\320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\214 \320\277\320\276\320\263\321\200\320\265\321\210\320\275\320\276\321\201\321\202\320\270):", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\210\320\260\320\263\320\260 \320\274\320\265\321\202\320\276\320\264\320\260:", nullptr));
        label_x->setText(QCoreApplication::translate("MainWindow", "\320\243\321\207\320\260\321\201\321\202\320\276\320\272 \320\270\320\275\321\202\320\265\320\263\321\200\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217:", nullptr));
        lineEdit_x_start->setText(QString());
        label_start->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\265 \321\203\321\201\320\273\320\276\320\262\320\270\321\217:", nullptr));
        label_mistake->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\321\202\321\200\320\276\320\273\321\214 \320\273\320\276\320\272\320\260\320\273\321\214\320\275\320\276\320\271 \320\277\320\276\320\263\321\200\320\265\321\210\320\275\320\276\321\201\321\202\320\270", nullptr));
        radioButton_mistake->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202:", nullptr));
        radioButton_blue->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\320\275\320\270\320\271", nullptr));
        radioButton_red->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", nullptr));
        radioButton_green->setText(QCoreApplication::translate("MainWindow", "\320\227\320\265\320\273\320\265\320\275\321\213\320\271", nullptr));
        radioButton_violet->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\276\320\273\320\265\321\202\320\276\320\262\321\213\320\271", nullptr));
        getdata_buttom->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214 \320\277\321\200\320\276\321\201\321\207\320\265\321\202", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \321\202\320\265\321\201\321\202", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 1", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\265 \320\267\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));

        label_n_2->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_n_3->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_n_4->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        label_n->setText(QCoreApplication::translate("MainWindow", "N :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\210\320\260\320\263\320\276\320\262:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213:", nullptr));
        button_plot->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        button_table->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
        button_clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        button_plot_from_file->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260 ( - )", nullptr));
        button_save_points->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273 ( - )", nullptr));
        HelpButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
