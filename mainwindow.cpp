#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //logger->createFile(dirLogPath, formatFile);

    ui->comboCarte->setEditable(true);

    //Dialog
    EntryDialog = new addEntry(this);
    ScanDialog= new Scan(this);

    ConnectionDialog = new Connection(this);
    ConnectionDialog->show();


    //définition des logs
    ui->comboCarte->addItems(logger->fileCartes);
    filePath = dirLogPath+ui->comboCarte->currentText()+formatFile;


    //définition de tableLogs
    ui->tableLogs->setColumnCount(Log::content_length-1);
    setTableLogs();

    //définions Graphs
    ui->graphic1->setScaledContents(true);
    ui->graphic2->setScaledContents(true);
    setGraphs();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete EntryDialog;
    delete ScanDialog;
}

//public getter current carte
QString MainWindow::getCurrentCarte()
{
    QString currentCarte = this->ui->comboCarte->currentText();
    return currentCarte;
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

        for (unsigned int index=1; index<log.content.size()+1; ++index)
        {
            log.setContentTableColumn(index, index-1);

            QTableWidgetItem *newItem = new QTableWidgetItem(tr("%1").arg(pow(log.logRow, log.getContentTableColumn(index-1))));
            newItem->setText(log.content[index-1]);

            // edition des Cellules
            ui->tableLogs->setItem(log.logRow, log.getContentTableColumn(index-1), newItem);

            //State Couleur
            if (!(index==15 || index==3)) {continue;}
            switch (log.content[14].toInt())
            {
            case 0:
                newItem->setBackground(QBrush(QColor(Qt::red)));
                break;

            case 1:
                newItem->setBackground(QBrush(QColor(Qt::yellow)));
                break;

            case 2:
                newItem->setBackground(QBrush(QColor(Qt::green)));
                break;
            }
        }
        row++;
    }
}

void MainWindow::setGraphs()
{
    graph1.load(graph1Path);

    graph2.load(graph2Path);

    ui->graphic1->setPixmap(graph1);
    ui->graphic2->setPixmap(graph2);
}

void MainWindow::createGraphs1()
{




}






void MainWindow::on_butEntry_clicked()
{
    //EntryDialog->~addEntry();
    EntryDialog = new addEntry(this, addEntry::Add);
    EntryDialog->showp();
}


void MainWindow::on_butRec_clicked()
{
    ScanDialog= new Scan(this);
    ScanDialog->show();
}


void MainWindow::on_comboCarte_currentTextChanged(const QString &arg1)
{
    if (logger->carteSet.find(arg1) == logger->carteSet.end())
    {
        filePath = dirLogPath+ui->comboCarte->currentText()+formatFile;
    }

    setTableLogs();
}


void MainWindow::on_tableLogs_cellClicked(int row)
{
    addEntry::CommentaireSplited initial_commentaire;

    for (Log &log : logger->fileContent)
    {
        if (log.logRow == row)
        {
            initial_commentaire = EntryDialog->splitCommentaire(log.content[16]);

            EntryDialog = new addEntry(this,
                                       addEntry::Edit,
                                       log.content[3],
                                       log.content[4],
                                       log.content[15],
                                       initial_commentaire.defaut,
                                       log.content[5],
                                       log.content[6],
                                       log.content[7],
                                       log.content[8],
                                       "DetailPanne",
                                       initial_commentaire.commentaire,
                                       log.content[14],
                                       log.content[13]);
            EntryDialog->show();
        }
    }
}
