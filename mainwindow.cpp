#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    filePath = "../Log/Depannage.txt";

    //LogView
    ui->LogView->setReadOnly(true);
    setLogView();

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

void MainWindow::addLog(QString& Entry) {
    content.append(Entry);
    ui->LogView->setHtml(content);
    ui->LogView->moveCursor(QTextCursor::End);
}

void MainWindow::setLogView() {
    QString line, t="<br><hr>";
    std::string sline;

    std::ifstream file(filePath);


    if (!file.is_open()) {
        std::cerr << "Erreur lors de l'ouverture du fichier : " << filePath << std::endl;
        return;
    }

    int x=0;
    while (std::getline(file, sline)) {
        line = QString::fromStdString(sline);
        x++;
        (x>=2) ? line += t : line;
        content.append(line);
    }
    ui->LogView->setHtml(content);
    ui->LogView->moveCursor(QTextCursor::End);
}
