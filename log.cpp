#include "log.h"
Log::Log() : similarity(0), id(0), sim_id(), line(""){}

Log::Log(double csim, unsigned int cid,vector<unsigned int>& csim_id, string& ccontent) {
    similarity = csim;
    id = cid;
    sim_id = csim_id;

    line = ccontent;
    //Log entière / date / nCarte/ cArticle / OF / FIC / °FIC / nPanne / comp / FlagD / commentaire
}

void Log::split() const {

    array<string, 11> localContent;
    localContent[0] = line;

    //split
    QString Qlog;
    QStringList QlogL1, QlogL;
    Qlog= QString::fromStdString(localContent[0]); //Log entière à split
    QlogL1 = Qlog.split(u'\t');
    QlogL = QlogL1.at(1).split(u'|');

    if (9>QlogL.size()) {
        Error *ErrorD;
        ErrorD = new Error();
        QString msg = "Erreur de Taille de Log Invalide : <br>"
                      "Date   nCarte | cArticle | OF | FIC | °FIC | nPanne | comp | FlagD | Commentaire <br><br>"+
                      QString::fromStdString(localContent[0]);
        ErrorD->SetMsg(msg);
        ErrorD->show();
        return;
    } else {
        localContent[1] = QlogL1.at(0).toStdString(); //Date
        localContent[2] = QlogL.at(0).toStdString(); //nCarte
        localContent[3] = QlogL.at(1).toStdString(); // cArticle
        localContent[4] = QlogL.at(2).toStdString(); // OF
        localContent[5] = QlogL.at(3).toStdString(); // FIC
        localContent[6] = QlogL.at(4).toStdString(); // °FIC
        localContent[7] = QlogL.at(5).toStdString(); //nPanne
        localContent[8] = QlogL.at(6).toStdString(); //comp
        localContent[9] = QlogL.at(7).toStdString(); // FlagD
        localContent[10] = QlogL.at(8).toStdString(); //commentaire
    }


    // Réassigner les valeurs modifiées à content
    const_cast<array<string, 11>&>(content) = localContent;
}

void ContentLog::split() const {

    array<string, 11> localContent;
    localContent[0] = content[0];

    //split
    QString Qlog;
    QStringList QlogL1, QlogL;
    Qlog= QString::fromStdString(localContent[0]); //Log entière à split
    QlogL1 = Qlog.split(u'\t');
    QlogL = QlogL1.at(1).split(u'|');

    if (9>QlogL.size()) {
        Error *ErrorD;
        ErrorD = new Error();
        QString msg = "Erreur de Taille de Log Invalide : <br>"
                      "Date   nCarte | cArticle | OF | FIC | °FIC | nPanne | comp | FlagD | Commentaire <br><br>"+
                      QString::fromStdString(localContent[0]);
        ErrorD->SetMsg(msg);
        ErrorD->show();
        return;
    } else {
        localContent[1] = QlogL1.at(0).toStdString(); //Date
        localContent[2] = QlogL.at(0).toStdString(); //nCarte
        localContent[3] = QlogL.at(1).toStdString(); // cArticle
        localContent[4] = QlogL.at(2).toStdString(); // OF
        localContent[5] = QlogL.at(3).toStdString(); // FIC
        localContent[6] = QlogL.at(4).toStdString(); // °FIC
        localContent[7] = QlogL.at(5).toStdString(); //nPanne
        localContent[8] = QlogL.at(6).toStdString(); //comp
        localContent[9] = QlogL.at(7).toStdString(); // FlagD
        localContent[10] = QlogL.at(8).toStdString(); //commentaire
    }


    // Réassigner les valeurs modifiées à content
    const_cast<array<string, 11>&>(content) = localContent;
}
