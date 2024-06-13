#include "edit.h"
#include "ui_edit.h"

Edit::Edit(MainWindow *parent)
    : QDialog(parent)
    , ui(new Ui::Edit)
{
    ui->setupUi(this);
    mainWindow = parent;
    OFs = extractOF();
    Logs= extractDate();

    ui->comboOF->setEditable(true);
    ui->comboOF->setCompleter(nullptr);
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
    QStringList simOF, simDate;
    string Sarg1 = arg1.toStdString();
    QString test;

//search OF
    for (string OF : OFs) {
        if (OF.find(Sarg1, 0) != string::npos) {
            simOF.append(QString::fromStdString(OF));
        }
    }

//  Affichage OF
    disconnect(ui->comboOF, SIGNAL(currentTextChanged(QString)),
               this, SLOT(on_comboOF_currentTextChanged(QString)));

    //modif simOF in combobox
    ui->comboOF->clear();
    ui->comboOF->addItems(simOF);
    ui->comboOF->setCurrentText(arg1);

    connect(ui->comboOF, SIGNAL(currentTextChanged(QString)),
            this, SLOT(on_comboOF_currentTextChanged(QString)));

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//search Date en fonction de OF
    for (ContentLog log : Logs) {

        if (ui->comboOF->currentText().toStdString() == log.content[4]) {
            simDate.append(QString::fromStdString(log.content[1]));
        }
    }
    ui->Commentaire->clear();
    ui->Commentaire->setHtml(test);

// Affichage Date
    disconnect(ui->comboDate, SIGNAL(currentTextChanged(QString)),
               this, SLOT(on_comboDate_currentTextChanged(QString)));

    //modif simDate in combobox
    ui->comboDate->clear();
    ui->comboDate->addItems(simDate);

    connect(ui->comboDate, SIGNAL(currentTextChanged(QString)),
            this, SLOT(on_comboDate_currentTextChanged(QString)));

// Save var
    ContentLog localEntry;
    for (ContentLog log : Logs) {
        if (log.content[1]==ui->comboDate->currentText().toStdString()&&
            log.content[4]==ui->comboOF->currentText().toStdString()) {
            localEntry = log;
        }
    }
    /*
    Entry.content[1] = localEntry.content[1];
    Entry.content[2] = localEntry.content[2];
    Entry.content[3] = localEntry.content[3];
    Entry.content[4] = localEntry.content[4];
    Entry.content[5] = localEntry.content[5];
    Entry.content[6] = localEntry.content[6];
    Entry.content[2] = localEntry.content[2];
    Entry.content[2] = localEntry.content[2];
*/
}


void Edit::on_comboDate_currentTextChanged(const QString &arg1)
{
    /*
    QStringList simOF, simDate;
    double sim;
    int tresh;
    bool treshflag = false;
    string Sarg1 = arg1.toStdString();
    vector<string> tempLogOF;
    for (ContentLog log : Logs) {
        tempLogOF.push_back(log.content[3]);
    }

    //search OF en fonction de Date
    std::unordered_set<string> Dateset(tempLogOF.begin(),tempLogOF.end());
    for (string OF : OFs) {

        if (Dateset.find(OF) != Dateset.end()) {
            simOF.append(QString::fromStdString(OF));
        }
    }
    ui->comboOF->clear();
    ui->comboOF->addItems(simOF);


    //search Date

    for (ContentLog log : Logs) {

        if (!treshflag) { //flag pour définir le treshold
            QString Qdate = QString::fromStdString(log.content[0]);
            tresh = arg1.length()/Qdate.length();
            treshflag = true;
        }

        sim = mongeElkanSimilarity(Sarg1,log.content[0]);
        if (sim >=tresh) {
            simOF.append(QString::fromStdString(log.content[0]));
        }
    }
    ui->comboDate->clear();
    ui->comboDate->addItems(simDate);
    */

// Affichage
}


vector<string> Edit::extractOF() {
    string filePath = "../data/Liste_OF.txt";
    ifstream file(filePath);
    vector<string> localOFs;
    QStringList localof;
    string sline;
    QString line;

    while (getline(file, sline)) {
        line = QString::fromStdString(sline);

        localof = line.split(u'\t');;
        localOFs.push_back(localof[0].toStdString());
    }
    file.close();
    return localOFs;
}

vector<ContentLog> Edit::extractDate() {
    string& filePath = mainWindow->filePath;
    ifstream file(filePath);
    vector<ContentLog> logs;
    string line;

    while (getline(file, line)) {
        if (line=="") {continue;}

        ContentLog templine;
        templine.content[0] = line;
        templine.split();
        logs.emplace_back(templine);

    }
    return logs;
}
