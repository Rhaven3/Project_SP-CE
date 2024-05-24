#include "logger.h"
#include "currentdatetime.h"

Logger::Logger() {}

//is logFile is Empty
bool Logger::isLogFileEmpty(const string& filePath) {
    ifstream ifs(filePath.c_str());
    return ifs.peek() == ifstream::traits_type::eof();;
}

// Create directory if it doesn't exist
void Logger::createDirectory(const string& dirPath) {
    struct stat info;
    if (stat(dirPath.c_str(), &info) != 0) {
        if (mkdir(dirPath.c_str()) != 0) {
            cerr << "Error creating directory: " << strerror(errno) << endl;
        }
    } else if (!(info.st_mode & S_IFDIR)) {
        cerr << dirPath << " exists but is not a directory" << endl;
    }
}

//with log msg
void Logger::lPrint(string logMsg){
    //path
    string logDir = "../Log/";
    Logger::createDirectory(logDir);
    string filePath = logDir + "log_"+getCurrentDateTime("date")+".txt";
        //creation
    ofstream ofs(filePath.c_str(), std::ios_base::out | std::ios_base::app );
        //msg
    bool isEmpty = Logger::isLogFileEmpty(filePath);
    (isEmpty) ? ofs<<"date \t | \t code Article | n°OF | N°Panne | Composant Concerné | Commentaire \n\n" : ofs;
    ofs << date << '\t' << logMsg << '\n';
    ofs.close();
}

//default
void Logger::lPrint(){
    //path
    Log= cArticle + " | " + OF + " | " + nPanne + " | " + comp + " | " + commentaire;
    string logDir = "../Log/";
    Logger::createDirectory(logDir);
    string filePath = logDir + "log_"+getCurrentDateTime("date")+".txt";
        //creation
    ofstream ofs(filePath.c_str(), std::ios_base::out | std::ios_base::app );
        //msg
    bool isEmpty = Logger::isLogFileEmpty(filePath);
    (isEmpty) ? ofs<<"date \t | \t code Article | n°OF | N°Panne | Composant Concerné | Commentaire \n\n" : ofs;
    ofs << date << '\t' << Log << '\n';
    ofs.close();
}
