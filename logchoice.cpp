#include "logchoice.h"
#include "error.h"
#include "ui_logchoice.h"

LogChoice::LogChoice(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LogChoice)
{
    ui->setupUi(this);
}

LogChoice::~LogChoice()
{
    delete ui;
}

void LogChoice::on_NoDepanned_clicked()
{
    QStringList L1 = {"19018FW", "18581FW", "18554FW"};
    ui->comboSearch->clear();
    ui->comboSearch->addItems(L1);
}


void LogChoice::on_Depanned_clicked()
{
    QStringList L1 = {"X18019", "X18581", "X45518"};
    ui->comboSearch->clear();
    ui->comboSearch->addItems(L1);
}



void LogChoice::on_Search_textChanged(const QString &arg1)
{

}


void LogChoice::on_buttonBox_accepted()
{
    QString msg = "Es-ce que ça marche ?";
    Error *ErrorD;
    ErrorD = new Error(this);
    ErrorD->SetMsg(msg);
    ErrorD->show();

    filePath = "../Log/log_2024-05-22.txt";
    //return filePath = ui->comboSearch->currentText();
}
