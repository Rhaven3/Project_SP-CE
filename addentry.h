#ifndef ADDENTRY_H
#define ADDENTRY_H

#include <QDialog>
#include <iostream>
#include "log.h"

namespace Ui {
class addEntry;
}

class addEntry : public QDialog
{
    Q_OBJECT

public:
    explicit addEntry(QWidget *parent = nullptr);
    ~addEntry();
    const Log getEntry();

private slots:
    void on_lineArticle_textChanged(const QString &arg1);
    void on_buttonBox_accepted();

private:
    Ui::addEntry *ui;
    Log Entry;


};

#endif // ADDENTRY_H
