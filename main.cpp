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
//test
inline string Randomiser(short);
//inline void LogTest();
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

    //essai log test
    long x=0;
    while(x!=10) {
        Logger(LogTest());
        x++;
    }

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
    // Note: This will lose precision because double cannot accurately represent 100 digit numbers
    double randomNumberDouble = stod(randomNumberStr);

    return randomNumberDouble;
}

//randomgen
inline  string Randomiser(short n) {
    short passwordLength;
 /*
    std::string characterSets;

    //generates a string with the length of passwordLength where each digit is a random approved character set for the password
    //i.e. 224332 is approved if they chose lowercase, uppercase, and digits
    bool error = true;
    while (error) {
        characterSets = generateRandCharSet(options, passwordLength);

        error = false;
        if ((options->find(1)!=options->end()||options->find(0)!=options->end())&&characterSets.find("1")==std::string::npos) {
            error = true;
        }
        if ((options->find(2)!=options->end()||options->find(0)!=options->end())&&characterSets.find("2")==std::string::npos) {
            error = true;
        }
        if ((options->find(3)!=options->end()||options->find(0)!=options->end())&&characterSets.find("3")==std::string::npos) {
            error = true;
        }
        if ((options->find(4)!=options->end()||options->find(0)!=options->end())&&characterSets.find("4")==std::string::npos) {
            error = true;
        }
    }
*/
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
    /*
    std::string lowercase = "abcdefghijklmnopqrstuvwxyz";
    std::string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string digits = "0123456789";
    std::string symbols = " ~!@#$%^&*()-=+[{]}\\;:'""/?.>,<";

    //generates the password by choosing a random character from each character set in the string characterSets

    for (int i = 0; i < passwordLength; i++) {
        if (characterSets[i]=='1') {
            password+=lowercase[rand() % lowercase.length()];
        }
        else if (characterSets[i]=='2') {
            password+=uppercase[rand() % uppercase.length()];
        }
        else if (characterSets[i]=='3') {
            password+=digits[rand() % digits.length()];
        }
        else if (characterSets[i]=='4') {
            password+=symbols[rand() % symbols.length()];
        }
    }
*/

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
