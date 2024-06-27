#include "connection.h"
#include "ui_connection.h"

Connection::Connection(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Connection)
{
    ui->setupUi(this);

    //message d'erreur
    ui->label_erreur1->hide();
    ui->label_erreur2->hide();
    ui->label_erreur3->hide();
}

Connection::~Connection()
{
    delete ui;
}



void Connection::on_butConnection_clicked()
{
    QString
        ID = ui->lineID->displayText(),
        MDP = ui->lineMDP->displayText();

    if (true)
    {
        ui->label_erreur1->show();
        ui->label_erreur2->show();
        ui->label_erreur3->show();
    }
}

