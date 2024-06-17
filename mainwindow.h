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

private:
    Ui::MainWindow *ui;
    addEntry *EntryDialog;
    Scan *ScanDialog;
};

#endif // MAINWINDOW_H
