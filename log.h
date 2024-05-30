#ifndef LOG_H
#define LOG_H

#include <vector>
#include <string>
#include <QString>
#include <QStringList>
#include <array>
#include <iostream>
using namespace std;

class Log {
public:
    //constructor var
    double similarity;
    unsigned int id;
    vector<unsigned int> sim_id;
    array<string, 7> content;

    //constructor
    Log (double, unsigned int, vector<unsigned int>&, array<string, 7>);
    //function
    void split() const;

private:

};

#endif // LOG_H
