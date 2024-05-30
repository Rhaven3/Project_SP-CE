//src
#include "mainwindow.h"
#include "scanerr.h"
#include "extractor.h"

//default
#include <QApplication>
#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    ScanErr l;
    string filePath = "../Log/log_2024-05-22.txt";
    vector<Log> logs = l.readLogsFromFile(filePath);

    int similarityThreshold = 65; // Pourcentage de similarité minimum
    unsigned int recTreshold = 1;
    vector<Log> fSL=l.findSimilarLogs(logs, similarityThreshold);
    l.findRecLogs(fSL, recTreshold);


    w.show();
    return a.exec();
}
