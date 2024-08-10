#include "fileopen.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

FileOpen::FileOpen() {
    // Constructor
}

void FileOpen::openAndReadFile(const QString& filePath) {
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Cannot open file for reading:" << file.errorString();
        return;
    }

    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine();
        qDebug() << line;
    }

    file.close();
}
