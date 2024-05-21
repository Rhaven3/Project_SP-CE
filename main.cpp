#include "mainwindow.h"
#include <iostream>
#include <cstdio>
#include <QApplication>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    freopen( "output.txt", "w", stdout );
    freopen( "error.txt", "w", stderr );

    cout << "Output message" << endl;
    cerr << "Error message" << endl;

    return a.exec();
}
