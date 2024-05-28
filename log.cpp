#include "log.h"

Log::Log(double csim, unsigned int cid,vector<unsigned int>& csim_id, array<string, 7> ccontent) {
    similarity = csim;
    id = cid;
    sim_id = csim_id;
    //Log entière / date / cArticle / OF / nPanne / comp / commentaire
    content = ccontent;
}

void Log::split() const {

    array<string, 7> localContent = content;

    //split
    QString Qlog;
    QStringList QlogL1, QlogL;
    Qlog= QString::fromStdString(localContent[0]); //Log entière à split
    QlogL1 = Qlog.split(u'\t');
    QlogL = QlogL1.at(1).split(u'|');

    localContent[1] = QlogL1.at(0).toStdString(); //Date
    localContent[2] = QlogL.at(0).toStdString(); // cArticle
    localContent[3] = QlogL.at(1).toStdString(); // OF
    localContent[4] = QlogL.at(2).toStdString(); //nPanne
    localContent[5] = QlogL.at(3).toStdString(); //comp
    localContent[6] = QlogL.at(4).toStdString(); //commentaire

    // Réassigner les valeurs modifiées à content
    const_cast<array<string, 7>&>(content) = localContent;
}
