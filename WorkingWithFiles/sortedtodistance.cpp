#include "sortedtodistance.h"
#include <QStringList>
#include <QDebug>
#include <QtMath>

SortedToDistance::SortedToDistance() {
    // Constructor
}

QString SortedToDistance::sortContentDistance(const QString& content) {
    QStringList lines = content.split('\n', QString::SkipEmptyParts);
    QList<QPair<double, QString>> sortableList;

    for (const QString& line : lines) {
        QStringList parts = line.split(' ', QString::SkipEmptyParts);

        if (parts.size() >= 3) {
            bool ok1, ok2;
            double x = parts[1].toDouble(&ok1);
            double y = parts[2].toDouble(&ok2);
           // qDebug() << "X"<<x;
           // qDebug() << "Y"<<y;
            if (ok1 && ok2) {

                double distance = qSqrt(x * x + y * y);
                sortableList.append(qMakePair(distance, line));
            }
        }
    }

    // Sort pair
    std::sort(sortableList.begin(), sortableList.end(), [](const QPair<double, QString>& a, const QPair<double, QString>& b) {
        return a.first < b.first;
    });

    // Sort lines
    QStringList sortedLines;

    for (const auto& pair : sortableList) {
        qDebug() << "Our Pair"<<pair.second;
        sortedLines.append(pair.second);
    }

    // Join all lines
    return sortedLines.join('\n');
}
