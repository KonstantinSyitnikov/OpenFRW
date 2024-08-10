#ifndef FILEOPEN_H
#define FILEOPEN_H

#include <QString>

class FileOpen {
public:
    FileOpen();  // Constructor
    QString openAndReadFile(const QString& filePath);
};

#endif
