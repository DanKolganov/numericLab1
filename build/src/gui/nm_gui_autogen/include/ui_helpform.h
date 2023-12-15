/********************************************************************************
** Form generated from reading UI file 'helpform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPFORM_H
#define UI_HELPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpForm
{
public:
    QLabel *image;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *image_rk_4;
    QLabel *label_14;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_13;

    void setupUi(QWidget *HelpForm)
    {
        if (HelpForm->objectName().isEmpty())
            HelpForm->setObjectName("HelpForm");
        HelpForm->resize(2048, 1185);
        image = new QLabel(HelpForm);
        image->setObjectName("image");
        image->setGeometry(QRect(10, 10, 1301, 861));
        image->setPixmap(QPixmap(QString::fromUtf8("image.png")));
        label_9 = new QLabel(HelpForm);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(920, 1140, 151, 31));
        label_10 = new QLabel(HelpForm);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 1190, 811, 31));
        layoutWidget = new QWidget(HelpForm);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(1610, 20, 448, 291));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");

        verticalLayout->addWidget(label_11);

        image_rk_4 = new QLabel(HelpForm);
        image_rk_4->setObjectName("image_rk_4");
        image_rk_4->setGeometry(QRect(1500, 380, 521, 411));
        image_rk_4->setPixmap(QPixmap(QString::fromUtf8("image.png")));
        label_14 = new QLabel(HelpForm);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(1610, 350, 429, 27));
        layoutWidget1 = new QWidget(HelpForm);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 1060, 1481, 71));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName("label_13");

        horizontalLayout_2->addWidget(label_13);


        retranslateUi(HelpForm);

        QMetaObject::connectSlotsByName(HelpForm);
    } // setupUi

    void retranslateUi(QWidget *HelpForm)
    {
        HelpForm->setWindowTitle(QCoreApplication::translate("HelpForm", "Form", nullptr));
        image->setText(QString());
        label_9->setText(QCoreApplication::translate("HelpForm", "\320\220\320\262\321\202\320\276\321\200: \320\232\320\276\320\273\320\263\320\260\320\275\320\276\320\262 \320\224.", nullptr));
        label_10->setText(QCoreApplication::translate("HelpForm", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213: A - \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200 \320\262\321\213\321\205\320\276\320\264\320\260 \320\277\320\276 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217\320\274 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\321\213\321\205 \320\264\320\273\321\217 \320\276\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \320\267\320\260\320\264\320\260\321\207\320\270 ", nullptr));
        label_2->setText(QCoreApplication::translate("HelpForm", "1 ) \320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("HelpForm", "2) \320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("HelpForm", "3) \320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 \320\277\320\276\320\263\321\200\320\265\321\210\320\275\320\276\321\201\321\202\320\270 \320\262\321\213\321\205\320\276\320\264\320\260 \320\275\320\260 \320\277\321\200\320\260\320\262\321\203\321\216 \320\263\321\200\320\260\320\275\320\270\321\206\321\203", nullptr));
        label_5->setText(QCoreApplication::translate("HelpForm", "4) \320\243\321\207\320\260\321\201\321\202\320\276\320\272, \320\275\320\260 \320\272\320\276\321\202\320\276\321\200\320\276\320\274 \320\261\321\203\320\264\320\265\321\202 \320\277\321\200\320\276\320\262\320\276\320\264\320\270\321\202\321\214\321\201\321\217 \321\200\320\260\321\201\321\207\320\265\321\202", nullptr));
        label_6->setText(QCoreApplication::translate("HelpForm", "5) \320\235\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\265 \321\203\321\201\320\273\320\276\320\262\320\270\321\217 (\320\277\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 \320\270 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\265)", nullptr));
        label_7->setText(QCoreApplication::translate("HelpForm", "6) \320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\217 \320\273\320\276\320\272\320\260\320\273\321\214\320\275\320\276\320\271 \320\277\320\276\320\263\321\200\320\265\321\210\320\275\320\276\321\201\321\202\320\270 ", nullptr));
        label_8->setText(QCoreApplication::translate("HelpForm", "7) \320\235\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 \321\210\320\260\320\263\320\260 ", nullptr));
        label_11->setText(QCoreApplication::translate("HelpForm", "8) \320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276 \320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\210\320\260\320\263\320\276\320\262", nullptr));
        image_rk_4->setText(QString());
        label_14->setText(QCoreApplication::translate("HelpForm", "\320\234\320\265\321\202\320\276\320\264 \320\240\320\232-4:", nullptr));
        label_13->setText(QCoreApplication::translate("HelpForm", "\320\237\320\276\321\217\321\201\320\275\320\265\320\275\320\270\321\217 \320\272 \321\202\320\260\320\261\320\273\320\270\321\206\320\265: u1_2 - \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\277\321\200\320\270 \320\264\320\262\320\276\320\271\320\275\320\276\320\274 \321\210\320\260\320\263\320\265 \320\236\320\233\320\237 - \320\276\321\206\320\265\320\275\320\272\320\260 \320\273\320\276\320\272\320\260\320\273\321\214\320\275\320\276\320\271 \320\277\320\276\320\263\321\200\320\265\321\210\320\275\320\276\321\201\321\202\320\270 (\320\274\320\276\320\264\321\203\320\273\321\214) \320\236\320\233\320\237/\320\236\320\233\320\237\320\237 - \320\276\321\202\320\275\320\276\321\210\320\265\320\275\320\270\320\265 \320\273\320\276\320\272\320\260\320\273\321\214\320\275\321\213\321\205 \320\277\320\276\320\263\321\200\320\265\321\210\320\275\320\276\321\201\321\202\320\265\320\271 U1 - \321\202\320\276\321\207\320\275\320\276\320\265 \321\200\320\265\321\210\320\265\320\275\320\270\320"
                        "\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpForm: public Ui_HelpForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPFORM_H
