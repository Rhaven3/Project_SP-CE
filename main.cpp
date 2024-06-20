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
#include "logger.h"
//default
#include <QApplication>
#include <QtCharts>

#include <iostream>
//macro
#define DEPRECATED [[deprecated]]
#define DEPRECATED_MSG(msg) [[deprecated(msg)]]


DEPRECATED_MSG("Les fichier ont normalement deja etait creer")
void createFile(QString filePath);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    return a.exec();
}



void createFile(QString filePath)
{
    Logger core(filePath);
    std::vector<QString> cartes;
    std::unordered_set<QString> carteSet;

    for (Log log : core.fileContent)
    {
        cartes.push_back(log.content[2]);
    }

    for (const auto& carte : cartes)
    {
        if (!carteSet.insert(carte).second)
        {continue;}

        std::ofstream file("../Log/"+carte.toStdString()+".txt");
        std::ofstream addFile("../Log/"+carte.toStdString()+".txt", std::ios::app);

        for (Log log : core.fileContent)
        {
            if (log.content[2]!=carte)
            {continue;}
            addFile<< log.content[0].toStdString()<<'\n';

            std::cout << log.content[0].toStdString()<< '\n';
        }
        std::cout << "Le fichier " << (carte.toStdString()+".txt") << " a eter creer et des donnees ont eter ecrites dedans." << '\n';
        std::cout<< '\n'<<'\n';
        addFile.close();
        file.close();
    }
}
