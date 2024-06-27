#include "addentry.h"
#include "ui_addentry.h"

addEntry::addEntry(MainWindow *parent, char mode, QString Article, QString OF, QString Poste, QString Defaut, QString FIC, QString IFIC, QString Panne, QString DesPanne, QString DetailPanne, QString Commentaire, QString State, QString Comp)
    : QDialog(parent)
    , ui(new Ui::addEntry)
{
    mainWindow = parent;

    ui->setupUi(this);
    ui->comboComp->setEditable(true);
    ui->comboCarte->setEditable(true);

    // Choix Descri Panne
    ui->frameMesure->hide();
    ui->frameDescriPanne->hide();

    if (ui->comboChoicePanne->currentText() == "Description Panne")
    {
        ui->frameMesure->show();
        ui->frameDescriPanne->hide();
    }

    if (mode == Edit)
    {
        ui->comboCarte->setEditable(false);
        ui->comboCarte->clear();
        setCurrentCarte();
        ui->lineArticle->setReadOnly(true);
        ui->lineOF->setReadOnly(true);

        ui->lineArticle->setText(Article);
        ui->lineOF->setText(OF);
        ui->comboPoste->setCurrentText(Poste);

        // Defaut


        ui->lineFIC->setText(FIC);
        ui->lineIFIC->setText(IFIC);
        ui->linePanne->setText(Panne);
        ui->lineDesPanne->setText(DesPanne);

        //Detail Panne


        ui->textcomment->setHtml(Commentaire);
        ui->comboState->clear();


        switch (State.toInt())
        {
        case 0:
            States = "Non Résolu";
            break;
        case 1:
            States = "Résolu";
            break;
        case 2:
            States = "En Résolution...";
            break;

        }
        ui->comboState->setCurrentText(States);
        ui->comboComp->clear();
        ui->comboComp->setCurrentText(Comp);
        ui->comboComp->setEditable(false);
    }


}




addEntry::~addEntry()
{
    delete ui;
}


void addEntry::setCurrentCarte()
{
    QString carte = mainWindow->getCurrentCarte();
    ui->comboCarte->setCurrentText(carte);
}


void addEntry::showp()
{
    setCurrentCarte();
    show();
}





void addEntry::on_comboCarte_currentTextChanged(const QString &arg1)
{

}


void addEntry::on_buttonBox_accepted()
{
// ENTRY


    //commentaire
    Commentaire = ui->textcomment->toPlainText();
    setCommentaire(Commentaire);

    if (ui->checkautre->isChecked())
    {
        setCommentaire('+', "Autre",ui->textDefAutre->toPlainText());
    }


}





// CHECKBOX DEFAUT
// Composant
void addEntry::on_checkHS_stateChanged(int arg1)
{
    if (arg1 == 2)
    {
        setCommentaire('+', Composant, ui->checkHS->text());
    } else {
        setCommentaire('-', Composant, ui->checkHS->text());
    }
}


void addEntry::on_checkPolarite_stateChanged(int arg1)
{
    if (arg1 == 2)
    {
        setCommentaire('+', Composant, ui->checkPolarite->text());
    } else {
        setCommentaire('-', Composant, ui->checkPolarite->text());
    }
}


void addEntry::on_checkabsent_stateChanged(int arg1)
{
    if (arg1 == 2)
    {
        setCommentaire('+', Composant, ui->checkabsent->text());
    } else {
        setCommentaire('-', Composant, ui->checkabsent->text());
    }
}


void addEntry::on_checkbrise_stateChanged(int arg1)
{
    if (arg1 == 2)
    {
        setCommentaire('+', Composant, ui->checkbrise->text());
    } else {
        setCommentaire('-', Composant, ui->checkbrise->text());
    }
}


// Soudure
void addEntry::on_checkabsente_stateChanged(int arg1)
{
    if (arg1 == 2)
    {
        setCommentaire('+', Soudure, ui->checkabsente->text());
    } else {
        setCommentaire('-', Soudure, ui->checkabsente->text());
    }
}


void addEntry::on_checkseche_stateChanged(int arg1)
{
    if (arg1 == 2)
    {
        setCommentaire('+', Soudure, ui->checkseche->text());
    } else {
        setCommentaire('-', Soudure, ui->checkseche->text());
    }
}


void addEntry::on_checkmanhatan_stateChanged(int arg1)
{
    if (arg1 == 2)
    {
        setCommentaire('+', Soudure, ui->checkmanhatan->text());
    } else {
        setCommentaire('-', Soudure, ui->checkmanhatan->text());
    }
}


void addEntry::on_checkpont_stateChanged(int arg1)
{
    if (arg1 == 2)
    {
        setCommentaire('+', Soudure, ui->checkpont->text());
    } else {
        setCommentaire('-', Soudure, ui->checkpont->text());
    }
}


// Circuit Imprimé
void addEntry::on_checkpontseri_stateChanged(int arg1)
{
    if (arg1 == 2)
    {
        setCommentaire('+', CI, ui->checkpontseri->text());
    } else {
        setCommentaire('-', CI, ui->checkpontseri->text());
    }
}


void addEntry::on_checkPiste_stateChanged(int arg1)
{
    if (arg1 == 2)
    {
        setCommentaire('+', CI, ui->checkPiste->text());
    } else {
        setCommentaire('-', CI, ui->checkPiste->text());
    }
}




//Entry
//date

//info extract with AOI

//state

//composant

//Commentaire
void addEntry::setCommentaire(char mode,QString Catdef,QString defaut, QString &commentaire)
{

    CategorieDefaut = Catdef;
    switch (mode)
    {
    case '+': // Ajout
        Defaut = Defaut+"_"+defaut;
        break;

    case '-': // Suppression
        Defaut.remove(("_"+defaut));
        if (Defaut.isEmpty())
        {
            CategorieDefaut ="";
            Commentaire_final = Commentaire;
            return;
        }
        break;
    }


    Commentaire = commentaire;
    QString pre_com = " / ";
    QString preCat = ": ";

    Commentaire_final = CategorieDefaut+preCat+Defaut+pre_com+Commentaire;
}

void addEntry::setCommentaire(char mode, QString CatDef, QString defaut)
{
    setCommentaire(mode, CatDef, defaut, Commentaire);
}

void addEntry::setCommentaire(QString &commentaire)

{
    Commentaire = commentaire;
    QString pre_com = " / ";
    QString preCat = ": ";

    if (Defaut.isEmpty())
    {
        CategorieDefaut ="";
        Commentaire_final = Commentaire;
        return;
    }

    Commentaire_final = CategorieDefaut+preCat+Defaut+pre_com+Commentaire;
}




void addEntry::on_comboChoicePanne_currentTextChanged(const QString &arg1)
{
    if (arg1 == "Description Panne")
    {
        ui->frameDescriPanne->show();
        ui->frameMesure->hide();
    }

    if (arg1 == "Mesure Panne")
    {
        ui->frameDescriPanne->hide();
        ui->frameMesure->show();
    }
}

