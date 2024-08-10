#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QDebug>
#include <QString>
#include <QStack>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void OpenFile();
    void ToDistance();

protected:
    void changeEvent(QEvent *e) override;

private:
    Ui::MainWindow *ui;
   QString showText = " ";
};

#endif // MAINWINDOW_H
