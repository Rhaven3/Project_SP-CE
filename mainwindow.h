#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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


public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Logger *logger = new Logger(filePath);

private slots:
    void on_butEntry_clicked();

    void on_butRec_clicked();

    void on_comboCarte_currentTextChanged(const QString &arg1);

    void on_tableLogs_cellClicked(int row, int column);

private:
    Ui::MainWindow *ui;
    //Dialog
    addEntry *EntryDialog;
    Scan *ScanDialog;
    //var
    QString Carte;

    void setTableLogs();
};

#endif // MAINWINDOW_H
