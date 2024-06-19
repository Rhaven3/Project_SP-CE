#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include "log.h"

class Log;

class Logger
{
    QString filePath;
    void Counting();
public:
    Logger(
        const QString& filepath,
        const QString& format=""
        );

    const unsigned int lineCount=0;
    const std::vector<Log> fileContent;


    std::vector<Log> extract(
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
