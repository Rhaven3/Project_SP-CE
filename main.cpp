#include "mainwindow.h"
#include <iostream>
#include <cstdio>
#include <QApplication>
#include <ctime>
#include <fstream>
#include <sys/stat.h>
#include <errno.h>
using namespace std;

    //declaration
//subfunction
inline string getCurrentDateTime(string);
bool isLogFileEmpty(const);
void createDirectory(const);
//function
inline void Logger(string);
inline void Logger();

    //global var
string date,cArticle, OF, nPanne, comp, commentaire;
string Log= cArticle + " | " + OF + " | " + nPanne + " | " + comp + " | " + commentaire;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    Logger();
    return a.exec();
}


//get Time
inline string getCurrentDateTime( string s ){
    time_t now = time(0);
    struct tm  tstruct;
    char  buf[80];
    tstruct = *localtime(&now);
    if(s=="now")
        strftime(buf, sizeof(buf), "%Y-%m-%d %X", &tstruct);
    else if(s=="date")
        strftime(buf, sizeof(buf), "%Y-%m-%d", &tstruct);
    return string(buf);
}

//is logFile is Empty
bool isLogFileEmpty(const string& filePath) {
    ifstream ifs(filePath.c_str());
    return ifs.peek() == ifstream::traits_type::eof();;
}

// Create directory if it doesn't exist
void createDirectory(const string& dirPath) {
    struct stat info;
    if (stat(dirPath.c_str(), &info) != 0) {
        if (mkdir(dirPath.c_str()) != 0) {
            cerr << "Error creating directory: " << strerror(errno) << endl;
        }
    } else if (!(info.st_mode & S_IFDIR)) {
        cerr << dirPath << " exists but is not a directory" << endl;
    }
}

    //Logger
//with log msg
inline void Logger(string logMsg){
        //path
    string logDir = "../Log/";
    createDirectory(logDir);
    string filePath = logDir + "log_"+getCurrentDateTime("date")+".txt";
        //creation
    ofstream ofs(filePath.c_str(), std::ios_base::out | std::ios_base::app );
        //msg
    bool isEmpty = isLogFileEmpty(filePath);
    (isEmpty) ? ofs<<"date \t | \t code Article | n°OF | N°Panne | Composant Concerné | Commentaire \n\n" : ofs;
    ofs << date << '\t' << logMsg << '\n';
    ofs.close();
}

//default
inline void Logger(){
        //path
    Log= cArticle + " | " + OF + " | " + nPanne + " | " + comp + " | " + commentaire;
    string logDir = "../Log/";
    createDirectory(logDir);
    string filePath = logDir + "log_"+getCurrentDateTime("date")+".txt";
        //creation
    ofstream ofs(filePath.c_str(), std::ios_base::out | std::ios_base::app );
        //msg
    bool isEmpty = isLogFileEmpty(filePath);
    (isEmpty) ? ofs<<"date \t | \t code Article | n°OF | N°Panne | Composant Concerné | Commentaire \n\n" : ofs;
    ofs << date << '\t' << Log << '\n';
    ofs.close();
}
