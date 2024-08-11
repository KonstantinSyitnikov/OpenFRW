#include "sortedontime.h"
#include <QStringList>
#include <QDebug>


SortedOnTime::SortedOnTime() {}


bool comparePairs(const QPair<double, QString>& a, const QPair<double, QString>& b) {
   // qDebug() << "comparePairs A"<<a.second;
   // qDebug() << "comparePairs B"<<b.second;
    return a.first < b.first;
}

QString SortedOnTime::sortContentTime(const QString& content) {
    QStringList lines = content.split('\n', QString::SkipEmptyParts);
    QList<QPair<double, QString>> sortableList;
    // qDebug() << "sortableList"<< sortableList;
    for (const QString& line : lines) {
        QStringList parts = line.split(' ', QString::SkipEmptyParts);

        bool ok;
        double unixTime = parts.last().toDouble(&ok);
       // qDebug() << "unixTime"<<unixTime;
        if (ok) {
            //qDebug() << "OK"<<unixTime;
            sortableList.append(qMakePair(unixTime, line));
        }
    }


    std::sort(sortableList.begin(), sortableList.end(), comparePairs);

    QStringList sortedLines;
    for (const auto& pair : sortableList) {
        sortedLines.append(pair.second);
    }

    return sortedLines.join('\n');
}
