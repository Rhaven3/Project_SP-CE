#ifndef ADDENTRY_H
#define ADDENTRY_H

#include <QDialog>
#include <iostream>
#include "log.h"
#include "mainwindow.h"

class MainWindow;

namespace Ui {
class addEntry;
}

class addEntry : public QDialog
{
    Q_OBJECT

public:
    explicit addEntry(MainWindow *parent = nullptr);
    ~addEntry();
    const Log getEntry();
    const void add_Entry();

private slots:
    void on_lineArticle_textChanged(const QString &arg1);
    void on_buttonBox_accepted();

private:
    Ui::addEntry *ui;
    Log Entry;
    MainWindow *mainWindow;


};

#endif // ADDENTRY_H
