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
#include "log.h"
using namespace std;

class ScanErr
{
public:
    ScanErr();
    vector<Log> readLogsFromFile(const string&);
    vector<Log> findSimilarLogs(vector<Log>&, int);
    void findRecLogs(const vector<Log>&, unsigned int);

private:
    int levenshteinDistance(const string&, const string&);
    double levenshteinSimilarity(const string&, const string&);
    vector<string> tokenize(const string&);
    double mongeElkanSimilarity(const string&, const string&);
};

#endif // SCANERR_H
