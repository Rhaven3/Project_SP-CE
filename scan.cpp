#include "scan.h"
#include "ui_scan.h"

Scan::Scan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Scan)
{
    ui->setupUi(this);

    ui->textRec->setReadOnly(true);
}

Scan::~Scan()
{
    delete ui;
}
