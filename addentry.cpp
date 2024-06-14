#include "addentry.h"
#include "ui_addentry.h"


addEntry::addEntry(MainWindow *parent)
    : QDialog(parent)
    , ui(new Ui::addEntry),
    Entry()
{
    mainWindow = parent;
    ui->setupUi(this);

    ui->comboCarte->setEditable(true);
    ui->comboCarte->addItem("...");

    ui->comboComp->setEditable(true);
    ui->comboComp->addItem(". . .");
}

addEntry::~addEntry()
{
    delete ui;
}

void addEntry::on_lineArticle_textChanged(const QString &arg1)
{
    QString shish=arg1;
    QStringList C1 = {"Carte n1", "Carte n2", "Carte n3"}, C2 = {"Carte n4", "Carte n5", "Carte n6"}, C3 = {"Carte n7", "Carte n8", "Carte n9"};
    QStringList B1 = {"Composant n1", "Composant n2", "Composant n3"}, B2 = {"Composant n4", "Composant n5", "Composant n6"}, B3 = {"Composant n7", "Composant n8", "Composant n9"};
    ui->Commentaire->insertHtml(shish);
    switch (arg1.toInt())
    {
        case 1:
            ui->comboCarte->clear();
            ui->comboCarte->addItems(C1);
            ui->comboComp->clear();
            ui->comboComp->addItems(B1);
            break;
        case 2:
            ui->comboCarte->clear();
            ui->comboCarte->addItems(C2);
            ui->comboComp->clear();
            ui->comboComp->addItems(B2);
            break;
        case 3:
            ui->comboCarte->clear();
            ui->comboCarte->addItems(C3);
            ui->comboComp->clear();
            ui->comboComp->addItems(B3);
            break;
        default:
            ui->comboCarte->clear();
            ui->comboCarte->addItem("...");
            ui->comboComp->clear();
            ui->comboComp->addItem(". . .");
            break;
    }
}


void addEntry::on_buttonBox_accepted()
{
    Entry.content = {"",
                     ui->dateTimeEdit->dateTime().toString().toStdString(),
                     ui->comboCarte->currentText().toStdString(),
                     ui->lineArticle->displayText().toStdString(),
                     "OF",
                     ui->lineFIC->displayText().toStdString(),
                     ui->lineiFIC->displayText().toStdString(),
                     ui->linePanne->displayText().toStdString(),
                     ui->comboComp->currentText().toStdString(),
                     "FlagD",
                     "Resolution / "+ui->Commentaire->toMarkdown().toStdString()
    };

    ofstream ofs(mainWindow->filePath.c_str(), std::ios_base::out | std::ios_base::app );
    //change file
    ofs << '\n'<< Entry.content[1] +"\t"+ Entry.content[2] + "|" + Entry.content[3] + "|" + Entry.content[4] + "|" + Entry.content[5] + "|" + Entry.content[6] + "|" + Entry.content[7] +"|"+ Entry.content[8] + "|"+ Entry.content[9] +"|"+ Entry.content[10];
    ofs.close();
    //change view
    QString content = QString::fromStdString(Entry.content[1] +"\t"+ Entry.content[2] + "|" + Entry.content[3] + "|" + Entry.content[4] + "|" + Entry.content[5] + "|" + Entry.content[6] + "|" + Entry.content[7] +"|"+ Entry.content[8] + "|"+ Entry.content[9] +"|"+ Entry.content[10] + "<br><hr>");
    mainWindow->addLog(content);
}

const ContentLog addEntry::getEntry() {
    return Entry;
}

const void addEntry::add_Entry() {

}
