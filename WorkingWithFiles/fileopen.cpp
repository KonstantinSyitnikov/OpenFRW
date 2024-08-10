#include "fileopen.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QFileDialog>

FileOpen::FileOpen() {

}


QString FileOpen::openAndReadFile(const QString& filePath) {
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "File Not Open" << file.errorString();
        return "";
    }

    QTextStream in(&file);
    QString fileContent = in.readAll();

    qDebug() << "File content:\n" << fileContent;

    file.close();
    return fileContent;
}



