#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <unordered_set>
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

    std::unordered_set<QString> carteSet;

    const unsigned int lineCount=0;
    std::vector<Log> fileContent;
    QStringList fileCartes;


    std::vector<Log> extract(
        const QString& filepath,
        const QString& format= "",
        const unsigned short header= 0
        );

    QStringList extractCarte();

    void convertCSV();
    void view();
    void scan();
    void graph();
};

#endif // LOGGER_H
