#ifndef LOG_H
#define LOG_H

#include <QString>
#include <QStringList>

/**
 * @class Log log.h
 * @brief Container for different data from a Log.
 */
class Log
{
    QString line;

public:
    Log();
    Log(QString& log, unsigned int id=0);

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
    static constexpr unsigned short content_length =16;
    std::array<QString, content_length> content;

    int logRow;

    /**
     * @brief split
     * split the entire Log in different item in content
     */
    void split() const;

    void setContentTableColumn(unsigned int index,unsigned int column);
    void setRow(int row);

    unsigned int getContentTableColumn(unsigned int index);

private:
    std::array<unsigned int, content_length> ContentTableColumn;
};

#endif // LOG_H
