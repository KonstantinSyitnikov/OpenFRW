#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "WorkingWithFiles/fileopen.h"
#include <QDebug>
#include <QString>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonOpen, &QPushButton::clicked, this, [=]{ OpenFile(); });

}

MainWindow::~MainWindow()
{
    delete ui;
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
    ui->ShowLabel->setText(this->showText); //ShowTextLabel
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
