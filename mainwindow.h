#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <unordered_set>
//Dialog
#include "addentry.h"
#include "scan.h"
#include "logger.h"

class Logger;

namespace Ui {
class MainWindow;
}

class addEntry;
class Scan;

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QString filePath = "../Log/Depannage.txt";
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
        "Commentaire",
        "Composant",
        "Flag",
        "Commentaire"
    };

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Logger *logger = new Logger(filePath);

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

    void setTableLogs();
};

#endif // MAINWINDOW_H
