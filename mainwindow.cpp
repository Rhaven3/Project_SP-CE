#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboCarte->setEditable(true);

    //définition des logs
    ui->comboCarte->addItems(logger->fileCartes);
    filePath = "../Log/"+ui->comboCarte->currentText()+".txt";


    //définition de tableLogs
    ui->tableLogs->setColumnCount(Log::content_length-1);
    setTableLogs();

    //définions Graphs
    setGraphs();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setTableLogs()
{
    ui->tableLogs->clearContents();
    logger = new Logger(filePath);


    ui->tableLogs->setRowCount(logger->lineCount);

    ui->tableLogs->setHorizontalHeaderLabels(columnNames);
    ui->tableLogs->setEditTriggers(QAbstractItemView::NoEditTriggers);




    int row=0;
    for (Log &log : logger->fileContent)
    {
        log.setRow(row);

        for (unsigned int index=1; index<log.content.size(); ++index)
        {
            log.setContentTableColumn(index, index-1);

            QTableWidgetItem *newItem = new QTableWidgetItem(tr("%1").arg(pow(log.logRow, log.getContentTableColumn(index))));
            newItem->setText(log.content[index]);

            // edition des Cellules


            ui->tableLogs->setItem(log.logRow, log.getContentTableColumn(index), newItem);
        }
        row++;
    }
}

void MainWindow::setGraphs()
{
    QGraphicsScene *scenes = new QGraphicsScene();

    // Charger une image
    QPixmap pixmap("../data/graphExemple.png"); // Remplacez par le chemin de votre image

    // Créer un item pour l'image et l'ajouter à la scèn
    scenes->addPixmap(pixmap);

    ui->graphic1->setScene(scenes);
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
    if (logger->carteSet.find(arg1) == logger->carteSet.end())
    {
        filePath = "../Log/"+ui->comboCarte->currentText()+".txt";
    }

    setTableLogs();
}


void MainWindow::on_tableLogs_cellClicked(int row)
{
    for (Log &log : logger->fileContent)
    {
        if (log.logRow == row)
        {
            EntryDialog = new addEntry(this);
            EntryDialog->show();
        }
    }
}

