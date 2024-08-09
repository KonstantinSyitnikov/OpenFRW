/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *TopFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *BtmFrame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QGraphicsView *graphicsView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(539, 385);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(82, 16, 117, 255), stop:1 rgba(131, 74, 161, 255));\n"
"font-family:PolandCannedIntoFuture-OxE3;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 70));
        QFont font;
        font.setFamily(QString::fromUtf8("PolandCannedIntoFuture-OxE3"));
        font.setPointSize(24);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-radius: 7px;"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(50, 16777215));
        label->setBaseSize(QSize(0, 0));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 7px;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/Icons/iconfinder-forward-arrow-next-right-direction-4593180_122243.svg")));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 7px;"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(50, 16777215));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 7px;"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icons/Icons/iconfinder-backward-back-arrow-previous-left-4593199_122265.svg")));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        TopFrame = new QFrame(centralwidget);
        TopFrame->setObjectName(QString::fromUtf8("TopFrame"));
        TopFrame->setStyleSheet(QString::fromUtf8("background-color: rgba(35, 29, 38, 80);\n"
"border: 1px solid rgba(255,255,255,40);\n"
"border-radius: 7px;\n"
"color: white;\n"
"font: 18pt \"Sans Serif\";\n"
""));
        horizontalLayout = new QHBoxLayout(TopFrame);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(TopFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(150, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sans Serif"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setKerning(false);
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(TopFrame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(150, 40));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(TopFrame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(150, 40));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_2->addWidget(TopFrame);

        BtmFrame = new QFrame(centralwidget);
        BtmFrame->setObjectName(QString::fromUtf8("BtmFrame"));
        BtmFrame->setStyleSheet(QString::fromUtf8("background-color: rgba(35, 29, 38, 80);\n"
"border: 1px solid rgba(255,255,255,40);\n"
"border-radius: 7px;\n"
"color: white;\n"
"font: 20pt \"Sans Serif\";\n"
""));
        horizontalLayout_2 = new QHBoxLayout(BtmFrame);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_4 = new QPushButton(BtmFrame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(150, 40));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(BtmFrame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(150, 40));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(BtmFrame);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(150, 40));

        horizontalLayout_2->addWidget(pushButton_6);


        verticalLayout_2->addWidget(BtmFrame);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_2->addWidget(graphicsView);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "OpenFRW", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\253\320\221\320\236\320\240 \320\241\320\236\320\240\320\242\320\230\320\240\320\236\320\222\320\232\320\230", nullptr));
        label_4->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\240\320\220\320\241\320\241\320\242\320\236\320\257\320\235\320\230\320\256", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\230\320\234\320\225\320\235\320\230", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\222\320\240\320\225\320\234\320\225\320\235\320\230", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\242\320\230\320\237\320\243", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\236\320\242\320\232\320\240\320\253\320\242\320\254 ", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\320\241\320\236\320\245\320\240\320\220\320\235\320\230\320\242\320\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
