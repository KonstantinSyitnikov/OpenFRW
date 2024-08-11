#include "sortedtoname.h"
#include <QStringList>
#include <QDebug>
#include <QtMath>

sortedtoName::sortedtoName() {

    // Constructor
}


QString sortedtoName::sortContentName(const QString& content) {
    QStringList lines = content.split('\n', QString::SkipEmptyParts);
    QList<QPair<QString, QString>> sortableList;

    for (const QString& line : lines) {
        QStringList parts = line.split(' ', QString::SkipEmptyParts);
        //qDebug() << "part"<<parts;
        if (!parts.isEmpty()) {

            QString firstWord = parts[0];
            sortableList.append(qMakePair(firstWord, line));
        }
    }

    // Sort pair
    std::sort(sortableList.begin(), sortableList.end(), [](const QPair<QString, QString>& a, const QPair<QString, QString>& b) {
        return a.first < b.first;
    });

    // Sort lines
    QStringList sortedLines;
    for (const auto& pair : sortableList) {
        sortedLines.append(pair.second);
    }

    // Join all lines
    return sortedLines.join('\n');
}

