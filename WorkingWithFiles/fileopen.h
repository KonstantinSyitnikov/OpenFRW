#ifndef FILEOPEN_H
#define FILEOPEN_H

#include <QString>

class FileOpen {
public:
    FileOpen();


    void openAndReadFile(const QString& filePath);
};

#endif
