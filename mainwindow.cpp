#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboCarte->setEditable(true);

    //définition de tableLogs
    ui->tableLogs->setColumnCount(Log::content_length-1);
    ui->tableLogs->setRowCount(logger->lineCount);
    QStringList columnNames = {
        "Date/Heure",
        "Numero_AOI",
        "Code Article",
        "OF", "FIC",
        "Indice FIC",
        "Panne",
        "Designation Panne",
        "Mesure",
        "Limite Min",
        "Limite Max",
        "Commentaire",
        "Composant",
        "Flag",
        "Commentaire"
    };
    ui->tableLogs->setHorizontalHeaderLabels(columnNames);
    ui->tableLogs->setEditTriggers(QAbstractItemView::NoEditTriggers);
    setTableLogs();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setTableLogs()
{
    int row=0;
    for (Log &log : logger->fileContent)
    {
        log.setRow(row);

        for (unsigned int index=0; index<log.content.size(); ++index)
        {
            log.setContentTableColumn(index, index);

            QTableWidgetItem *newItem = new QTableWidgetItem(tr("%1").arg(pow(log.logRow, log.getContentTableColumn(index))));
            newItem->setText(log.content[index]);

            ui->tableLogs->setItem(log.logRow, log.getContentTableColumn(index), newItem);
        }
        row++;
    }
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


void MainWindow::on_tableLogs_cellClicked(int row)
{
    for (Log &log : logger->fileContent)
    {
        if (log.logRow == row) {
            EntryDialog = new addEntry(this);
            EntryDialog->show();
        }
    }
}

