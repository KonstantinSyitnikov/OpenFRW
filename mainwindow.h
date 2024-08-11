#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QDebug>
#include <QString>
#include <QStack>
#include <QGraphicsEllipseItem>
#include <QGraphicsScene>


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
    void ToName();
    void ToTime();
    void ToTipe();
    void AddText();
    void DeleteString();
    void SaveFile();
    void keyPressEvent(QKeyEvent *event);
    void ShowGraph();


protected:
    void changeEvent(QEvent *e) override;

private:
    Ui::MainWindow *ui;
    QString showText = " ";
    QGraphicsScene *scene;
};

#endif // MAINWINDOW_H
