#ifndef SCANERR_H
#define SCANERR_H

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

class ScanErr
{
public:
    ScanErr();
    vector<string> readLogsFromFile(const string&);
    void findSimilarLogs(const vector<string>&, int);

private:
    int levenshteinDistance(const string&, const string&);
};

#endif // SCANERR_H
