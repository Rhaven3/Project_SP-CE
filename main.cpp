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
    Extractor ex;
    string filePath = "../Log/log_2024-05-24.txt";
    vector<string> logs = l.readLogsFromFile(filePath);

    int similarityThreshold = 60; // Pourcentage de similarité minimum
    l.findSimilarLogs(logs, similarityThreshold);
    //ex.LogSpliter();




    w.show();
    return a.exec();
}
