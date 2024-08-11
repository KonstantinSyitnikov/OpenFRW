#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "WorkingWithFiles/fileopen.h"
#include "WorkingWithFiles/sortedtodistance.h"
#include "WorkingWithFiles/sortedtoname.h"
#include "WorkingWithFiles/sortedontime.h"
#include "WorkingWithFiles/sortedtotipe.h"
#include <QDebug>
#include <QString>
#include <QFileDialog>
#include <QVBoxLayout>
#include <QInputDialog>
#include <QDateTime>
#include <QKeyEvent>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonOpen, &QPushButton::clicked, this, [=]{ OpenFile(); });
    connect(ui->pushButtonDisgtance, &QPushButton::clicked, this, [=]{ ToDistance(); });
    connect(ui->pushButtonName, &QPushButton::clicked, this, [=]{ ToName(); });
    connect(ui->pushButtonOnTime,&QPushButton::clicked, this, [=]{ ToTime(); });
    connect(ui->pushButtonTipe,&QPushButton::clicked, this, [=]{ ToTipe(); });
    connect(ui->pushButtonAdd, &QPushButton::clicked, this, [=]{ AddText(); });
    connect(ui->pushButtonDel, &QPushButton::clicked, this, [=]{ DeleteString(); });
    connect(ui->pushButtonSave, &QPushButton::clicked, this, [=]{ SaveFile(); });

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

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
/////////////


void MainWindow::keyPressEvent(QKeyEvent *event) {
    if (event->modifiers() == Qt::ControlModifier) {
        if (event->key() == Qt::Key_Plus || event->key() == Qt::Key_Equal) {
            // Ctrl + + zoom in
            ui->graphicsView->scale(1.1, 1.1);
        } else if (event->key() == Qt::Key_Minus) {
            // Ctrl + -  zoom out
            ui->graphicsView->scale(0.9, 0.9);
        }
    }
    QMainWindow::keyPressEvent(event);
}

void MainWindow::ShowGraph()
{
    // clear scene
    scene->clear();

    //get coord in label
    QString data = ui->ShowLabel->text();
    QStringList lines = data.split('\n', QString::SkipEmptyParts);

    // if data empty
    if (lines.isEmpty()) {

        return;
    }

    for (const QString& line : lines) {
        QStringList parts = line.split(' ', QString::SkipEmptyParts);
        if (parts.size() > 3) {
            float x = parts[1].toFloat(); // x coord
            float y = parts[2].toFloat(); // y coord
            QString label = parts[0]; // set name point

            // Create point
            QGraphicsEllipseItem *point = new QGraphicsEllipseItem(x, y, 5, 5); // A small circle at (x, y)


            point->setPen(QPen(Qt::black)); // border point
            point->setBrush(Qt::white); //centr point
            QGraphicsTextItem *textItem = new QGraphicsTextItem(label);


            textItem->setPos(x + 5, y);
            scene->addItem(textItem);
            scene->addItem(point);
        }
    }

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setResizeAnchor(QGraphicsView::AnchorViewCenter);
    ui->graphicsView->fitInView(scene->itemsBoundingRect(), Qt::KeepAspectRatio);

    QRectF rect(0, 0, 100, 100);
    ui->graphicsView->fitInView(rect, Qt::KeepAspectRatio);
}




/////////////////

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

    SortedToDistance sortDist;
    QString sortedText = sortDist.sortContentDistance(this->showText);


    ui->ShowLabel->setText(sortedText);
    ShowGraph();
}

void MainWindow::ToName()
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

    sortedtoName sortName;
    QString sortedText = sortName.sortContentName(this->showText);
    ui->ShowLabel->setText(sortedText);
}

void MainWindow::ToTime()
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

    SortedOnTime sortName;
    QString sortedText = sortName.sortContentTime(this->showText);
    ui->ShowLabel->setText(sortedText);
}

void MainWindow::ToTipe()
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

    SortedToTipe sortTipe;
    QString sortedText = sortTipe.sortContentTipe(this->showText);
    ui->ShowLabel->setText(sortedText);
}


/////////////

void MainWindow::AddText() {
    bool ok;
    //Unix time
    qint64 currentUnixTime = QDateTime::currentSecsSinceEpoch();
    //Random
    float random1 = static_cast<float>(qrand()) / static_cast<float>(RAND_MAX) * 2000.0f - 1000.0f;
    float random2 = static_cast<float>(qrand()) / static_cast<float>(RAND_MAX) * 2000.0f - 1000.0f;
    QString newText = QInputDialog::getText(this,
    tr("Добавить текст"),
    tr("Время от 1970: \n"
    "%1 \n-------- \n "
    "Случайно сгенерированные цифры :\n %2   %3 \n-------- \n "
    "ВВЕИТЕ ЖЕЛАЕМЫЙ ТЕКСТ:")
    .arg(currentUnixTime)
    .arg(random1)
    .arg(random2),
    QLineEdit::Normal,
    "", &ok);

    if (ok && !newText.isEmpty()) {  // if input empty
        QString currentText = ui->ShowLabel->text();
        currentText += "\n" + newText;
        ui->ShowLabel->setText(currentText);
    }
}

void MainWindow::DeleteString() {
    // Get text
    QString currentText = ui->ShowLabel->text();

    //Which string delete
    bool ok;
    QString textToDelete = QInputDialog::getText(this,
    tr("Удалить запись"),
    tr("Введите первое слово \n в желаемой строке :"),
    QLineEdit::Normal, "", &ok);

    if (!ok || textToDelete.isEmpty()) {
        // If user dont entered text
        qDebug() << "No text";
        return;
    }

    // Split current text
    QStringList lines = currentText.split('\n', QString::SkipEmptyParts);

    // Find and remove line
    bool recordFound = false;
    for (int i = 0; i < lines.size(); ++i) {
        if (lines[i].contains(textToDelete)) {
            lines.removeAt(i);
            recordFound = true;
            break;
        }
    }

    if (!recordFound) {
        // If record is not found
        qDebug() << "String not found";
        return;
    }

    // Update label
    ui->ShowLabel->setText(lines.join('\n'));
    this->showText = ui->ShowLabel->text();

   // qDebug() << "String deleted successfully";
}

void MainWindow::SaveFile() {
    // Open file SAVE
    QString filePath = QFileDialog::getSaveFileName(this, "Save File", "", "Text Files (*.txt)");

    // If not found
    if (filePath.isEmpty()) {
        qDebug() << "File not found";
        return;
    }

    // Get current text ShowLabel
    QString textToSave = ui->ShowLabel->text();

    // Create File
    QFile file(filePath);

    // Try open file save and close
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << textToSave;
        file.close();
        qDebug() << "File saved successfully";
    } else {
        // If file not save displai error message
        qDebug() << "Could not save the file";
    }
}


/////////////


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
