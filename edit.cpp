#include "edit.h"
#include "ui_edit.h"

Edit::Edit(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Edit)
{
    ui->setupUi(this);
    ui->comboOF->setEditable(true);
    ui->comboDate->setEditable(true);
}

Edit::~Edit()
{
    delete ui;
}

void Edit::on_buttonBox_accepted()
{

}

void Edit::on_comboOF_currentTextChanged(const QString &arg1)
{

}


void Edit::on_comboDate_currentTextChanged(const QString &arg1)
{

}

