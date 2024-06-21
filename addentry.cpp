#include "addentry.h"
#include "ui_addentry.h"

addEntry::addEntry(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addEntry)
{
    ui->setupUi(this);
    ui->comboComp->setEditable(true);
}

addEntry::~addEntry()
{
    delete ui;
}

void addEntry::on_comboCarte_currentTextChanged(const QString &arg1)
{

}


void addEntry::on_buttonBox_accepted()
{

}


void addEntry::on_comboState_currentTextChanged(const QString &arg1)
{

}


void addEntry::on_comboComp_currentTextChanged(const QString &arg1)
{

}

