#ifndef LOGGER_H
#define LOGGER_H

#include <QString>
#include <fstream>

class Logger
{
    QString filePath;
    QString fileContent;

public:
    Logger(
        const QString& filepath,
        const QString& format=""
        );


    QString extract(
        const QString& filepath,
        const QString& format= "",
        const unsigned short header= 0
        );

    void convertCSV();
    void view();
    void scan();
    void graph();
};

#endif // LOGGER_H
