#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <fstream>
#include <sstream>
#include <iostream>
#include "addentry.h"
#include "edit.h"
#include "logchoice.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void setLogView(const std::string&);
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_butAddEntry_clicked();
    void on_butEdit_clicked();
    void on_butScan_clicked();

private:
    Ui::MainWindow *ui;
    addEntry *addEntryDialog;
    Edit *EditDialog;
    LogChoice *LogCDialog;

};
#endif // MAINWINDOW_H
