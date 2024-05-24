#ifndef TEST_H
#define TEST_H

#include <random>
#include <QString>
#include <QStringList>
using namespace std;

class test
{
public:
    test();

    inline string Randomiser(short);
    inline string LogTest();

private:
     //global var
    string date,cArticle, OF, nPanne, comp, commentaire;
    // 1 | 2 | 3 | 4 | 5
    string Log= cArticle + " | " + OF + " | " + nPanne + " | " + comp + " | " + commentaire;
    inline string generateRandomNumberString(int length);
    inline double generateRandomNumberDouble(int length);
};

#endif // TEST_H
