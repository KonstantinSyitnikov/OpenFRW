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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *ShowLabel;
    QFrame *TitleFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *TopFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonDisgtance;
    QPushButton *pushButtonName;
    QPushButton *pushButtonOnTime;
    QFrame *BtmFrame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonTipe;
    QPushButton *pushButtonOpen;
    QPushButton *pushButtonSave;
    QGraphicsView *graphicsView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(575, 596);
        MainWindow->setMaximumSize(QSize(650, 700));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(82, 16, 117, 255), stop:1 rgba(131, 74, 161, 255));\n"
"font-family:PolandCannedIntoFuture-OxE3;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(550, 250));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 561, 248));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ShowLabel = new QLabel(scrollAreaWidgetContents);
        ShowLabel->setObjectName(QString::fromUtf8("ShowLabel"));
        ShowLabel->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("PolandCannedIntoFuture-OxE3"));
        font.setPointSize(24);
        ShowLabel->setFont(font);
        ShowLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-radius: 7px;"));
        ShowLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(ShowLabel);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        TitleFrame = new QFrame(centralwidget);
        TitleFrame->setObjectName(QString::fromUtf8("TitleFrame"));
        TitleFrame->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: transparent; \n"
"   /* color: white; \n"
"    border-radius: 7px;\n"
"    border: 1px solid rgba(255,255,255,40);*/\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(TitleFrame);
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(TitleFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(50, 16777215));
        label->setBaseSize(QSize(0, 0));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 7px;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/Icons/iconfinder-forward-arrow-next-right-direction-4593180_122243.svg")));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        label_3 = new QLabel(TitleFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 7px;"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(TitleFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(50, 16777215));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 7px;"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icons/Icons/iconfinder-backward-back-arrow-previous-left-4593199_122265.svg")));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);


        verticalLayout_2->addWidget(TitleFrame);

        TopFrame = new QFrame(centralwidget);
        TopFrame->setObjectName(QString::fromUtf8("TopFrame"));
        TopFrame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: rgba(255, 255, 255, 10);\n"
"    font: 16pt \"Sans Serif\";\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: transparent; \n"
"    color: white; \n"
"    border-radius: 7px;\n"
"    border: 1px solid rgba(255,255,255,40);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 90); \n"
"}"));
        horizontalLayout = new QHBoxLayout(TopFrame);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonDisgtance = new QPushButton(TopFrame);
        pushButtonDisgtance->setObjectName(QString::fromUtf8("pushButtonDisgtance"));
        pushButtonDisgtance->setMinimumSize(QSize(150, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("PolandCannedIntoFuture-OxE3"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setKerning(false);
        pushButtonDisgtance->setFont(font1);

        horizontalLayout->addWidget(pushButtonDisgtance);

        pushButtonName = new QPushButton(TopFrame);
        pushButtonName->setObjectName(QString::fromUtf8("pushButtonName"));
        pushButtonName->setMinimumSize(QSize(150, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("PolandCannedIntoFuture-OxE3"));
        font2.setPointSize(14);
        pushButtonName->setFont(font2);

        horizontalLayout->addWidget(pushButtonName);

        pushButtonOnTime = new QPushButton(TopFrame);
        pushButtonOnTime->setObjectName(QString::fromUtf8("pushButtonOnTime"));
        pushButtonOnTime->setMinimumSize(QSize(150, 40));
        pushButtonOnTime->setFont(font2);

        horizontalLayout->addWidget(pushButtonOnTime);


        verticalLayout_2->addWidget(TopFrame);

        BtmFrame = new QFrame(centralwidget);
        BtmFrame->setObjectName(QString::fromUtf8("BtmFrame"));
        BtmFrame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: rgba(255, 255, 255, 10);\n"
"    font: 16pt \"Sans Serif\";\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: transparent; \n"
"    color: white; \n"
"    border-radius: 7px;\n"
"    border: 1px solid rgba(255,255,255,40);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 90); \n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(BtmFrame);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonTipe = new QPushButton(BtmFrame);
        pushButtonTipe->setObjectName(QString::fromUtf8("pushButtonTipe"));
        pushButtonTipe->setMinimumSize(QSize(150, 40));
        pushButtonTipe->setFont(font2);

        horizontalLayout_2->addWidget(pushButtonTipe);

        pushButtonOpen = new QPushButton(BtmFrame);
        pushButtonOpen->setObjectName(QString::fromUtf8("pushButtonOpen"));
        pushButtonOpen->setMinimumSize(QSize(150, 40));
        pushButtonOpen->setFont(font2);

        horizontalLayout_2->addWidget(pushButtonOpen);

        pushButtonSave = new QPushButton(BtmFrame);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(150, 40));
        pushButtonSave->setFont(font2);

        horizontalLayout_2->addWidget(pushButtonSave);


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
        ShowLabel->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\321\217 \320\275\320\260\321\207\320\260\320\273\320\260 \320\276\321\202\320\272\321\200\320\276\320\271\321\202\320\265 \321\204\320\260\320\271\320\273 ", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\253\320\221\320\236\320\240 \320\241\320\236\320\240\320\242\320\230\320\240\320\236\320\222\320\232\320\230", nullptr));
        label_4->setText(QString());
        pushButtonDisgtance->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\240\320\220\320\241\320\241\320\242\320\236\320\257\320\235\320\230\320\256", nullptr));
        pushButtonName->setText(QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\230\320\234\320\225\320\235\320\230", nullptr));
        pushButtonOnTime->setText(QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\222\320\240\320\225\320\234\320\225\320\235\320\230", nullptr));
        pushButtonTipe->setText(QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\242\320\230\320\237\320\243", nullptr));
        pushButtonOpen->setText(QCoreApplication::translate("MainWindow", "\320\236\320\242\320\232\320\240\320\253\320\242\320\254 ", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("MainWindow", "\320\241\320\236\320\245\320\240\320\220\320\235\320\230\320\242\320\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
