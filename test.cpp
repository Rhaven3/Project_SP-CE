#include "test.h"
#include "currentdatetime.h"

test::test() {}

string test::generateRandomNumberString(int length) {
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

double test::generateRandomNumberDouble(int length) {
    string randomNumberStr = test::generateRandomNumberString(length);
    // Convert the string to a double
    double randomNumberDouble = stod(randomNumberStr);
    return randomNumberDouble;
}

string test::Randomiser(short n) {
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

string test::LogTest() {
    date= getCurrentDateTime("now");
    cArticle=Randomiser(1);
    OF=Randomiser(2);
    nPanne=Randomiser(3);
    comp=Randomiser(4);
    commentaire=Randomiser(5);
    Log= cArticle + " | " + OF + " | " + nPanne + " | " + comp + " | " + commentaire;


    return Log;
}
