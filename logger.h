#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <unordered_set>
#include <QtCharts>
#include "iostream"
#include "log.h"
#include "sql.h"

class Log;

class Logger
{
    QString filePath;
    QString dir = "../Log/",
        formatFile = ".txt";
    std::vector<QString> cartePath;
    void Counting();

    //connect
    QString
        id = "FONTAINE",
        mdp = "Jcrv4UQ9x56D";

    SQL *connect;
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
    QList<QPieSlice> extract4PieChart();
    void createFile(QString& dirLogPath, QString& formatFile);
};

#endif // LOGGER_H
