#ifndef LOGGER_H
#define LOGGER_H


#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include <cstdlib>
using namespace std;

class Logger
{
public:
    Logger();

    inline void lPrint(string);
    inline void lPrint();

private:
     //global var
    string date,cArticle, OF, nPanne, comp, commentaire;
    // 1 | 2 | 3 | 4 | 5
    string Log= cArticle + " | " + OF + " | " + nPanne + " | " + comp + " | " + commentaire;
    //function
    bool isLogFileEmpty(const string&);
    void createDirectory(const string&);

};

#endif // LOGGER_H
