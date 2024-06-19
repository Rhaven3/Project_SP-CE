/**
 * @file main.cpp
 * @brief Logiciel de Suivi de Panne
 * @author Théo.F
 * @version 0.2
 * @date Juin 2024
 *
*/


//src
#include "mainwindow.h"
//default
#include <QApplication>
#include <QtCharts>
#include <iostream>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    return a.exec();
}
