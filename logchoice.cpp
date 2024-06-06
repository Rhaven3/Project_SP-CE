#include "logchoice.h"
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
