#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//Dialog
#include "addentry.h"
#include "scan.h"

namespace Ui {
class MainWindow;
}

class addEntry;
class Scan;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_butEntry_clicked();

    void on_butRec_clicked();

    void on_comboCarte_currentTextChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    //Dialog
    addEntry *EntryDialog;
    Scan *ScanDialog;
    //var
    QString Carte;
};

#endif // MAINWINDOW_H
