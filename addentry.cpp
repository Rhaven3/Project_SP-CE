#include "addentry.h"
#include "ui_addentry.h"

addEntry::addEntry(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addEntry)
{
    ui->setupUi(this);
}

addEntry::~addEntry()
{
    delete ui;
}

void addEntry::on_lineArticle_textChanged(const QString &arg1)
{
    QString shish=arg1;
    ui->Commentaire->insertHtml(shish);
    switch (arg1.toInt())
    {
        case 1:
            shish="shish2";
            ui->Commentaire->insertHtml(shish);
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
    }
}


void addEntry::on_buttonBox_accepted()
{

}

