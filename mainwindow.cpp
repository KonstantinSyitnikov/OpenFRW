#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "WorkingWithFiles/fileopen.h"
#include "WorkingWithFiles/sortedtodistance.h"
#include <QDebug>
#include <QString>
#include <QFileDialog>
#include <QVBoxLayout>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonOpen, &QPushButton::clicked, this, [=]{ OpenFile(); });
    connect(ui->pushButtonDisgtance, &QPushButton::clicked, this, [=]{ ToDistance(); });


}

MainWindow::~MainWindow() {
    delete ui;
    // Dest
}

void MainWindow::OpenFile() {
    // Open file dialog
    QString filePath = QFileDialog::getOpenFileName(this, "Open File", "", "Text Files (*.txt)");

    if (filePath.isEmpty()) {
        qDebug() << "File not found";
        return;
    }

    FileOpen fileOpener;
    this->showText = fileOpener.openAndReadFile(filePath);
    ui->ShowLabel->setText(this->showText);  //ShowTextLabel
}

void MainWindow::ToDistance()
{

    QString verifyData = ui->ShowLabel->text();
    if (verifyData.isEmpty()) {
        ui->ShowLabel->setText("Нет данных для сортировки \n Нажмите кнопку 'ОТКРЫТЬ'");
        //qDebug() << "No content";
        return;
    }
    else if (verifyData=="Для начала откройте файл ")
    {
        ui->ShowLabel->setText("Нет данных для сортировки \n Нажмите кнопку 'ОТКРЫТЬ'");

        return;
    }
    else if (verifyData=="Нет данных для сортировки \n Нажмите кнопку 'ОТКРЫТЬ'")
    {
        ui->ShowLabel->setText("Нет данных для сортировки \n Нажмите кнопку 'ОТКРЫТЬ'");

        return;
    }

    SortedToDistance sorter;
    QString sortedText = sorter.sortContentDistance(this->showText);


    ui->ShowLabel->setText(sortedText);
}

void MainWindow::changeEvent(QEvent *e) {
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
