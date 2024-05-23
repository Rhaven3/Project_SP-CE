#include "mainwindow.h"
#include <iostream>
#include <cstdio>
#include <QApplication>
#include <ctime>
#include <fstream>
#include <sys/stat.h>
#include <errno.h>
#include <cstdlib>
#include <set>
#include <sstream>
#include <QString>
#include <QStringList>
#include <math.h>
#include <limits>
#include <random>
using namespace std;

    //declaration
//subfunction
inline string getCurrentDateTime(string);
bool isLogFileEmpty(const);
void createDirectory(const);
//function
inline void Logger(string);
inline void Logger();
inline void ExtractLogD();
inline void ExtractOF();
inline void LogSpliter();
//test
inline string Randomiser(short);
inline string LogTest();

    //global var
string date,cArticle, OF, nPanne, comp, commentaire;
// 1 | 2 | 3 | 4 | 5
string Log= cArticle + " | " + OF + " | " + nPanne + " | " + comp + " | " + commentaire;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;



    //Logger();


    LogSpliter();
    w.show();
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

    //extractLogD
inline void ExtractLogD() {

}
    //extractOF
inline void ExtractOF(){

}

    //test
string generateRandomNumberString(int length) {
    // Initialize random number generator
    random_device rd;  // Seed for the random number engine
    mt19937 gen(rd()); // Mersenne Twister engine
    uniform_int_distribution<> dis(0, 9); // Distribution for digits 0-9

    // Generate random number as a string
    string randomNumber;
    randomNumber.reserve(length);

    // Ensure the first digit is not zero
    randomNumber += to_string(dis(gen) % 9 + 1); // First digit between 1 and 9

    // Generate the remaining digits
    for (int i = 1; i < length; ++i) {
        randomNumber += to_string(dis(gen));
    }

    return randomNumber;
}

double generateRandomNumberDouble(int length) {
    string randomNumberStr = generateRandomNumberString(length);
    // Convert the string to a double
    double randomNumberDouble = stod(randomNumberStr);
    return randomNumberDouble;
}

//randomgen
inline  string Randomiser(short n) {
    short passwordLength;

    //size for log
    if (n==1) { //cArticle
        passwordLength = 9;
    } else if (n==2) { // OF
        passwordLength = rand()%5+4;
    } else if (n==3) { // nPanne
        passwordLength = 2;
    } else if (n==4) { // comp
        passwordLength = rand()%4+1;
    } else if (n==5) { // commentaire
        passwordLength = rand()%100+5;
    }

    double password = generateRandomNumberDouble(passwordLength);
    QString Qpass;
    string pass;

    Qpass= QString::fromStdString(to_string(password));
    auto Qlist= Qpass.split(u'.');
    Qpass= Qlist.at(0);
    pass= Qpass.toStdString();
    return pass;
}

inline string LogTest() {
    date=getCurrentDateTime("now");
    cArticle=Randomiser(1);
    OF=Randomiser(2);
    nPanne=Randomiser(3);
    comp=Randomiser(4);
    commentaire=Randomiser(5);
    Log= cArticle + " | " + OF + " | " + nPanne + " | " + comp + " | " + commentaire;


    return Log;
}

inline void LogSpliter() {
    string filePath="../Log/log_2024-05-23.txt";
    ifstream file(filePath); // Ouvrir le fichier en lecture

    if (!file.is_open()) {
        cerr << "Erreur lors de l'ouverture du fichier : " << filePath << endl;
        return;
    }

    string line;
    while (getline(file, line)) { // Lire le fichier ligne par ligne
        cout << line << endl; // Afficher chaque ligne
    }

    file.close(); // Fermer le fichier
}
