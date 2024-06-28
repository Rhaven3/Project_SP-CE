#ifndef ADDENTRY_H
#define ADDENTRY_H

#include "mainwindow.h"
#include <QDialog>
#include "sql.h"
#include <unordered_map>


class MainWindow;

namespace Ui {
class addEntry;
}

class addEntry : public QDialog
{
    Q_OBJECT

    QString States;
    char spliter_defaut = '_';
    char spliter_cat = ':';
    char spliter_commentaire[3];


    // Setter
    void setCurrentCarte ();
    void setEditChoiceDefaut(QString& defaut);
    int hashString(const QString& std);


public:
    explicit addEntry(MainWindow *parent = nullptr,
                      char mode = 'A',
                      QString Article = QString(),
                      QString OF = QString(),
                      QString Poste = QString(),
                      QString Defaut = QString(),
                      QString FIC = QString(),
                      QString IFIC = QString(),
                      QString Panne = QString(),
                      QString DesPanne = QString(),
                      QString DetailPanne = QString(),
                      QString Commentaire = QString(),
                      QString State = QString(),
                      QString Comp = QString());
    ~addEntry();

    static const char Edit = 'E',
        Add = 'A';

    struct CommentaireSplited
    {
        QString commentaire = "";
        QString defaut = "";
    };
    CommentaireSplited splitCommentaire(QString& commentaire);

    void showp();


private slots:
    void on_comboCarte_currentTextChanged(const QString &arg1);
    void on_buttonBox_accepted();


// CHECKBOX DEFAUT
    //Composant
    void on_checkHS_stateChanged(int arg1);
    void on_checkPolarite_stateChanged(int arg1);
    void on_checkabsent_stateChanged(int arg1);
    void on_checkbrise_stateChanged(int arg1);
    //Soudure
    void on_checkabsente_stateChanged(int arg1);
    void on_checkseche_stateChanged(int arg1);
    void on_checkmanhatan_stateChanged(int arg1);
    void on_checkpont_stateChanged(int arg1);
    //Circuit Imrpimé
    void on_checkpontseri_stateChanged(int arg1);
    void on_checkPiste_stateChanged(int arg1);

    void on_comboChoicePanne_currentTextChanged(const QString &arg1);

private:
    Ui::addEntry *ui;

    MainWindow *mainWindow;

    //Entry
    //commentaire
    QString Composant = "Composant", Soudure = "Soudure", CI = "Circuit Imprimé";
    QString CategorieDefaut ="";
    QString Defaut="";
    QString Commentaire="";
    QString Commentaire_final="";
    void setCommentaire(QString& commentaire);
    void setCommentaire(char mode,QString CatDef,QString defaut);
    void setCommentaire(char mode,QString CatDef,QString defaut, QString& commentaire);

};

#endif // ADDENTRY_H
