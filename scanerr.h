#ifndef SCANERR_H
#define SCANERR_H

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <set>
#include <QString>
#include <QStringList>
using namespace std;

class ScanErr
{
public:
    ScanErr();
    vector<string> readLogsFromFile(const string&);
    void findSimilarLogs(const vector<string>&, int);

private:
    int levenshteinDistance(const string&, const string&);
    double levenshteinSimilarity(const string&, const string&);
    vector<string> tokenize(const string&);
    double mongeElkanSimilarity(const string&, const string&);

    //split
    QString Qlog;
    QStringList QlogLi1, QlogLj1, QlogLi, QlogLj;
    //log
    string date[2],cArticle[2], OF[2], nPanne[2], comp[2], commentaire[2];

};

class Log {
public:
    Log ();

private:

};
#endif // SCANERR_H
