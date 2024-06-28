#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//Dialog
#include "addentry.h"
#include "scan.h"
#include "logger.h"
#include "connection.h"


class Logger;
class addEntry;

namespace Ui {
class MainWindow;
}

class addEntry;
class Scan;

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QString
        filePath = "G:/production/depannage/Suivi_L4832/Depannage.txt",
        dirLogPath = "../Log/",
        formatFile = ".txt",
        graph1Path = "../data/graph1Exemple.png",
        graph2Path = "../data/graphExemple.png";

    QStringList columnNames = {
        "Date/Heure",
        "Numero_AOI",
        "Code Article",
        "OF", "FIC",
        "Indice FIC",
        "Panne",
        "Designation Panne",
        "Mesure",
        "Limite Min",
        "Limite Max",
        "Commentaire Panne",
        "Composant",
        "Flag",
        "Poste",
        "Commentaire"
    };

    QPixmap graph1, graph2;

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Logger *logger = new Logger(filePath);

    //getter
    QString getCurrentCarte();

private slots:
    void on_butEntry_clicked();
    void on_butRec_clicked();
    void on_comboCarte_currentTextChanged(const QString &arg1);
    void on_tableLogs_cellClicked(int row);

private:
    Ui::MainWindow *ui;
    //Dialog
    addEntry *EntryDialog;
    Scan *ScanDialog;
    Connection *ConnectionDialog;

    void setTableLogs();

    QPieSeries *graphic1 = new QPieSeries();

    void createGraphs1();
    void createGraphs2();
    void setGraphs();
};

#endif // MAINWINDOW_H
