#ifndef SCANERR_H
#define SCANERR_H

#include <fstream>
#include "log.h"
#include "mongeelkan.h"
using namespace std;

class ScanErr
{
public:
    ScanErr();
    vector<Log> readLogsFromFile(const string&);
    vector<Log> findSimilarLogs(vector<Log>&, int);
    void findRecLogs(const vector<Log>&, unsigned int);
};

#endif // SCANERR_H
