#ifndef LOG_H
#define LOG_H

#include <vector>
#include <string>
#include <QString>
#include <QStringList>

/**
 * @class Log log.h
 * @brief Container for different data from a Log.
 */
class Log
{
    static constexpr unsigned short content_length = 11;
    QString line;

    struct coordinate {
        unsigned int row;
        unsigned int column;
    };

public:
    Log();
    Log(QString&, unsigned int);

    /**
     * @brief id
     * Number attributable to recognise the Log
     *
     * @brief sim_id
     * Dynamic array to stock up the id of Log than is similar
     */
    unsigned int id;
    std::vector<unsigned int> sim_id;


    /**
     * @brief content
     * Array of different item of a Log: \n
     * - Date/Heure
     * - Numero_AOI
     * - Code Article
     * - OF
     * - FIC
     * - Indice FIC
     * - Panne
     * - Designation Panne
     * - Mesure
     * - Limite min
     * - Limite Max
     * - Commentaire
     * - Composant
     * - Flag
     * - Commentaire
     */
    std::array<QString, content_length> content;


    //Log::coordinate log_position;

    /**
     * @brief split
     * split the entire Log in different item in content
     */
    void split() const;
};

#endif // LOG_H
