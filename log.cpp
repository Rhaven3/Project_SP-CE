#include "log.h"

Log::Log()
    : line("")
    , id(0)
{}

Log::Log(QString &c_line, unsigned int c_id) {
    id = c_id;
    line = c_line;
}

void Log::split() const {

    std::array<QString, content_length> localContent;
    localContent[0] = line;

    //split
    QString Qlog;
    QStringList QlogL1, QlogL;
    Qlog= localContent[0]; //Log entière à split
    QlogL1 = Qlog.split(u'\t');
    QlogL = QlogL1.at(1).split(u'|');

    /*
     * Error page à créer
     *
    if (9>QlogL.size()) {
        Error *ErrorD;
        ErrorD = new Error();
        QString msg = "Erreur de Taille de Log Invalide : <br>"
                      "Date   nCarte | cArticle | OF | FIC | °FIC | nPanne | comp | FlagD | Commentaire <br><br>"+
                      QString::fromStdString(localContent[0]);
        ErrorD->SetMsg(msg);
        ErrorD->show();
        return;
    }
*/

    // Split
    localContent[1] = QlogL1.at(0);
    for (unsigned int i=2; i<content_length; ++i) {
        localContent[i] = QlogL.at(i-2);
    }

    // Réassigner les valeurs modifiées à content
    const_cast<std::array<QString, content_length>&>(content) = localContent;
}
