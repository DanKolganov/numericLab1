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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCustomPlot *plot;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QRadioButton *radioButton_blue;
    QRadioButton *radioButton_red;
    QRadioButton *radioButton_green;
    QRadioButton *radioButton_violet;
    QPushButton *getdata_buttom;
    QTableWidget *tableWidget;
    QPushButton *HelpButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QTextBrowser *max_h_txt;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QTextBrowser *min_h_txt;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QTextBrowser *max_le_txt;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QTextBrowser *max_glob_txt;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_10;
    QTextBrowser *step_num_txt;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *button_table;
    QPushButton *button_save_points;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *button_plot;
    QPushButton *button_clear;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_n_2;
    QLineEdit *lineEdit_a;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_n_3;
    QLineEdit *lineEdit_b;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_n_5;
    QLineEdit *lineEdit_control_LE_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLineEdit *lineEdit_x_start;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_12;
    QLineEdit *lineEdit_x_end;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_start;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_14;
    QLineEdit *lineEdit_start_x;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_13;
    QLineEdit *lineEdit_start_y;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_precision;
    QLabel *label_2;
    QLineEdit *lineEdit_step;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *lineEdit_n;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_n_6;
    QTextEdit *textEdit;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_n_7;
    QTextEdit *textEdit_2;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(2033, 1177);
        MainWindow->setTabletTracking(false);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        plot = new QCustomPlot(centralwidget);
        plot->setObjectName("plot");
        plot->setGeometry(QRect(320, 10, 791, 801));
        plot->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(560, 820, 341, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
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
        getdata_buttom->setGeometry(QRect(50, 780, 161, 32));
        getdata_buttom->setCursor(QCursor(Qt::PointingHandCursor));
        getdata_buttom->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(1130, 10, 891, 811));
        tableWidget->setStyleSheet(QString::fromUtf8("font: 10pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);"));
        HelpButton = new QPushButton(centralwidget);
        HelpButton->setObjectName("HelpButton");
        HelpButton->setGeometry(QRect(20, 1010, 241, 32));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 830, 241, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        max_h_txt = new QTextBrowser(layoutWidget);
        max_h_txt->setObjectName("max_h_txt");

        horizontalLayout_3->addWidget(max_h_txt);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_9->addWidget(label_7);

        min_h_txt = new QTextBrowser(layoutWidget);
        min_h_txt->setObjectName("min_h_txt");

        horizontalLayout_9->addWidget(min_h_txt);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_10->addWidget(label_8);

        max_le_txt = new QTextBrowser(layoutWidget);
        max_le_txt->setObjectName("max_le_txt");

        horizontalLayout_10->addWidget(max_le_txt);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_11->addWidget(label_9);

        max_glob_txt = new QTextBrowser(layoutWidget);
        max_glob_txt->setObjectName("max_glob_txt");

        horizontalLayout_11->addWidget(max_glob_txt);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        horizontalLayout_12->addWidget(label_10);

        step_num_txt = new QTextBrowser(layoutWidget);
        step_num_txt->setObjectName("step_num_txt");

        horizontalLayout_12->addWidget(step_num_txt);


        verticalLayout->addLayout(horizontalLayout_12);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(1560, 840, 166, 66));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        button_table = new QPushButton(layoutWidget1);
        button_table->setObjectName("button_table");
        button_table->setCursor(QCursor(Qt::PointingHandCursor));
        button_table->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        verticalLayout_3->addWidget(button_table);

        button_save_points = new QPushButton(layoutWidget1);
        button_save_points->setObjectName("button_save_points");
        button_save_points->setCursor(QCursor(Qt::PointingHandCursor));
        button_save_points->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        verticalLayout_3->addWidget(button_save_points);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(640, 880, 177, 66));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        button_plot = new QPushButton(layoutWidget2);
        button_plot->setObjectName("button_plot");
        button_plot->setCursor(QCursor(Qt::PointingHandCursor));
        button_plot->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(button_plot);

        button_clear = new QPushButton(layoutWidget2);
        button_clear->setObjectName("button_clear");
        button_clear->setCursor(QCursor(Qt::PointingHandCursor));
        button_clear->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(button_clear);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(20, 310, 241, 408));
        verticalLayout_5 = new QVBoxLayout(layoutWidget3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        verticalLayout_5->addWidget(label_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_n_2 = new QLabel(layoutWidget3);
        label_n_2->setObjectName("label_n_2");
        label_n_2->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout_7->addWidget(label_n_2);

        lineEdit_a = new QLineEdit(layoutWidget3);
        lineEdit_a->setObjectName("lineEdit_a");
        lineEdit_a->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_7->addWidget(lineEdit_a);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_n_3 = new QLabel(layoutWidget3);
        label_n_3->setObjectName("label_n_3");
        label_n_3->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout_8->addWidget(label_n_3);

        lineEdit_b = new QLineEdit(layoutWidget3);
        lineEdit_b->setObjectName("lineEdit_b");
        lineEdit_b->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_8->addWidget(lineEdit_b);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_n_5 = new QLabel(layoutWidget3);
        label_n_5->setObjectName("label_n_5");
        label_n_5->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout_14->addWidget(label_n_5);

        lineEdit_control_LE_2 = new QLineEdit(layoutWidget3);
        lineEdit_control_LE_2->setObjectName("lineEdit_control_LE_2");
        lineEdit_control_LE_2->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_14->addWidget(lineEdit_control_LE_2);


        verticalLayout_5->addLayout(horizontalLayout_14);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName("label_11");

        horizontalLayout_5->addWidget(label_11);

        lineEdit_x_start = new QLineEdit(layoutWidget3);
        lineEdit_x_start->setObjectName("lineEdit_x_start");
        lineEdit_x_start->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0)"));

        horizontalLayout_5->addWidget(lineEdit_x_start);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_12 = new QLabel(layoutWidget3);
        label_12->setObjectName("label_12");

        horizontalLayout_13->addWidget(label_12);

        lineEdit_x_end = new QLineEdit(layoutWidget3);
        lineEdit_x_end->setObjectName("lineEdit_x_end");
        lineEdit_x_end->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_13->addWidget(lineEdit_x_end);


        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_start = new QLabel(layoutWidget3);
        label_start->setObjectName("label_start");
        label_start->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout_4->addWidget(label_start);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_14 = new QLabel(layoutWidget3);
        label_14->setObjectName("label_14");

        horizontalLayout_2->addWidget(label_14);

        lineEdit_start_x = new QLineEdit(layoutWidget3);
        lineEdit_start_x->setObjectName("lineEdit_start_x");
        lineEdit_start_x->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_2->addWidget(lineEdit_start_x);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName("label_13");

        horizontalLayout_15->addWidget(label_13);

        lineEdit_start_y = new QLineEdit(layoutWidget3);
        lineEdit_start_y->setObjectName("lineEdit_start_y");
        lineEdit_start_y->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_15->addWidget(lineEdit_start_y);


        verticalLayout_5->addLayout(horizontalLayout_15);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(layoutWidget3);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        verticalLayout_2->addWidget(label);

        lineEdit_precision = new QLineEdit(layoutWidget3);
        lineEdit_precision->setObjectName("lineEdit_precision");
        lineEdit_precision->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        verticalLayout_2->addWidget(lineEdit_precision);

        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_step = new QLineEdit(layoutWidget3);
        lineEdit_step->setObjectName("lineEdit_step");
        lineEdit_step->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        verticalLayout_2->addWidget(lineEdit_step);


        verticalLayout_5->addLayout(verticalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        horizontalLayout_6->addWidget(label_3);

        lineEdit_n = new QLineEdit(layoutWidget3);
        lineEdit_n->setObjectName("lineEdit_n");
        lineEdit_n->setStyleSheet(QString::fromUtf8("font: 9pt \"FiraCode Nerd Font Propo\";"));

        horizontalLayout_6->addWidget(lineEdit_n);


        verticalLayout_5->addLayout(horizontalLayout_6);

        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(10, 20, 258, 102));
        verticalLayout_6 = new QVBoxLayout(layoutWidget4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_n_6 = new QLabel(layoutWidget4);
        label_n_6->setObjectName("label_n_6");
        label_n_6->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        verticalLayout_6->addWidget(label_n_6);

        textEdit = new QTextEdit(layoutWidget4);
        textEdit->setObjectName("textEdit");

        verticalLayout_6->addWidget(textEdit);

        layoutWidget5 = new QWidget(centralwidget);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(10, 150, 258, 141));
        verticalLayout_7 = new QVBoxLayout(layoutWidget5);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_n_7 = new QLabel(layoutWidget5);
        label_n_7->setObjectName("label_n_7");
        label_n_7->setStyleSheet(QString::fromUtf8("font: 11pt \"FiraCode Nerd Font Propo\";\n"
"color:rgb(0, 0, 0);\n"
"color-bg:rgb(255,255,255)"));

        verticalLayout_7->addWidget(label_n_7);

        textEdit_2 = new QTextEdit(layoutWidget5);
        textEdit_2->setObjectName("textEdit_2");

        verticalLayout_7->addWidget(textEdit_2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 2033, 49));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202:", nullptr));
        radioButton_blue->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\320\275\320\270\320\271", nullptr));
        radioButton_red->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", nullptr));
        radioButton_green->setText(QCoreApplication::translate("MainWindow", "\320\227\320\265\320\273\320\265\320\275\321\213\320\271", nullptr));
        radioButton_violet->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\276\320\273\320\265\321\202\320\276\320\262\321\213\320\271", nullptr));
        getdata_buttom->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214 \321\200\320\260\321\201\321\207\320\265\321\202", nullptr));
        HelpButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \321\210\320\260\320\263:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \321\210\320\260\320\263:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201. \320\236\320\233\320\237:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201. \320\223\320\273\320\276\320\261. \320\237\320\276\320\263\321\200:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \321\210\320\260\320\263\320\276\320\262 \320\274\320\265\321\202\320\276\320\264\320\260:", nullptr));
        button_table->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
        button_save_points->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        button_plot->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        button_clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213:", nullptr));
        label_n_2->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_n_3->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_n_5->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\321\205\320\276\320\264\320\260 \320\275\320\260 \320\263\321\200\320\260\320\275\320\270\321\206\321\203:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\276\320\265 t", nullptr));
        lineEdit_x_start->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\265\321\207\320\275\320\276\320\265 t", nullptr));
        label_start->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\265 \321\203\321\201\320\273\320\276\320\262\320\270\321\217:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\276\320\265 x(t)", nullptr));
#if QT_CONFIG(whatsthis)
        lineEdit_start_x->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\265\321\207\320\275\320\276\320\265 x(t)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\321\207\320\275\320\276\321\201\321\202\321\214 (\320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\214 \320\277\320\276\320\263\321\200\320\265\321\210\320\275\320\276\321\201\321\202\320\270):", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 \321\210\320\260\320\263\320\260 \320\274\320\265\321\202\320\276\320\264\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201. \320\272\320\276\320\273-\320\262\320\276 \321\210\320\260\320\263\320\276\320\262:", nullptr));
        label_n_6->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\320\273\320\276\320\262\320\270\320\265 \320\267\320\260\320\264\320\260\320\275\320\270\321\217:", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\236\321\201\321\202\321\213\320\262\320\260\320\275\320\270\320\265 \321\200\320\260\320\267\320\276\320\263\321\200\320\265\321\202\320\276\320\263\320\276 \321\202\320\265\320\273\320\260, \320\277\320\276\320\274\320\265\321\211\320\265\320\275\320\275\320\276\320\263\320\276 \321\201 \321\206\320\265\320\273\321\214\321\216 \320\276\321\205\320\273\320\260\320\266\320\264\320\265\320\275\320\270\320\265 \320\262\320\262 \320\277\320\276\321\202\320\276\320\272 \320\266\320\270\320\272\320\276\321\201\321\202\320\270 \320\270\320\273\320\270 \320"
                        "\263\320\260\320\267\320\260, \320\270\320\274\320\265\321\216\321\211\320\265\320\263\320\276 \320\277\320\276\321\201\321\202\320\276\321\217\320\275\320\275\321\203\321\216 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\321\203 \320\222</p></body></html>", nullptr));
        label_n_7->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\320\260\320\273\321\214\320\275\320\276\320\265 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265:", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">du/dx = -A(u - B), u(0) = u_0</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A - \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\277\321\200\320\276\320\277\320\276\321\200\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\276\321\201\321\202\320\270 "
                        "</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222 - \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \321\201\321\200\320\265\320\264\321\213</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">u_0 - \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \321\202\320\265\320\273\320\260 \320\262 \320\275\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
