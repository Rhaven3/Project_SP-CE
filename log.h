#ifndef LOG_H
#define LOG_H

#include <vector>
#include <string>
#include <QString>
#include <QStringList>
#include <array>
#include <iostream>
#include "error.h"
using namespace std;

class Log {
public:
    //constructor var
    double similarity;
    unsigned int id;
    vector<unsigned int> sim_id;
    array<string, 11> content;

    //constructor
    Log ();
    Log (double, unsigned int, vector<unsigned int>&, string&);
    //function
    void split() const;
private:
    string line;
};

#endif // LOG_H
