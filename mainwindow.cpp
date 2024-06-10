#include "mainwindow.h"
#include "ui_mainwindow.h"


void MainWindow::setLogView() {
    QString content, line, t="<br><hr>";
    std::string sline;

    filePath = LogCDialog->filePath;
    std::ifstream file(filePath);


    if (!file.is_open()) {
        std::cerr << "Erreur lors de l'ouverture du fichier : " << filePath << std::endl;
    }

    int x=0;
    while (std::getline(file, sline)) {
        line = QString::fromStdString(sline);
        x++;
        (x>=2) ? line += t : line;
        content.append(line);
    }

    ui->LogView->setHtml(content);
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //LogView
    ui->LogView->setReadOnly(true);
    LogCDialog = new LogChoice(this);
    connect(LogCDialog, &LogChoice::accepted, LogCDialog, &LogChoice::on_buttonBox_accepted);
    connect(LogCDialog, &LogChoice::accepted, this, &MainWindow::setLogView);

    LogCDialog->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_butAddEntry_clicked()
{
    addEntryDialog = new addEntry(this);
    addEntryDialog->show();
}


void MainWindow::on_butEdit_clicked()
{
    EditDialog = new Edit(this);
    EditDialog->show();
}


void MainWindow::on_butScan_clicked()
{

}

