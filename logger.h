#ifndef LOGGER_H
#define LOGGER_H


#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include <cstdlib>
#include <string>
using std::string;

class Logger
{
public:
    Logger();
    string date,cArticle, OF, nPanne, comp, commentaire;
    // 1 | 2 | 3 | 4 | 5
    string Log= cArticle + " | " + OF + " | " + nPanne + " | " + comp + " | " + commentaire;


    void lPrint(string);
    void lPrint();

private:
    //function
    bool isLogFileEmpty(const string&);
    void createDirectory(const string&);

};

#endif // LOGGER_H
