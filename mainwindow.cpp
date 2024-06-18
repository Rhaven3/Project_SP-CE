#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboCarte->setEditable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_butEntry_clicked()
{
    EntryDialog = new addEntry(this);
    EntryDialog->show();
}


void MainWindow::on_butRec_clicked()
{
    ScanDialog = new Scan(this);
    ScanDialog->show();
}


void MainWindow::on_comboCarte_currentTextChanged(const QString &arg1)
{
    Carte = arg1;

}

