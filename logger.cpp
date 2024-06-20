#include "logger.h"

Logger::Logger(const QString &filepath, const QString &format)
{
    filePath = filepath;

    Counting();
    fileContent = extract(filePath, format);
    fileCartes = extractCarte();
}

std::vector<Log> Logger::extract(const QString& filepath, const QString &format, const unsigned short header) {
    QString line;
    std::vector<Log> content;
    std::string string_line;
    std::ifstream file(filepath.toStdString());

    int x=0;
    while (std::getline(file, string_line)) {
        line = QString::fromStdString(string_line);
        x++;
        (x>=header) ? line += format : line;
        content.emplace_back(line, x);
        content[x-1].split();
    }
    file.close();
    return content;
}

void Logger::Counting() {
    std::string string_line;
    std::ifstream file(filePath.toStdString());

    /* Message d'erreur à créer
     *
    if (!file.is_open()) {
        std::cerr << "Erreur lors de l'ouverture du fichier : " << filePath << std::endl;
        return;
    }
    */
    unsigned int x=0;
    while (std::getline(file, string_line)) {
        ++x;
    }

    const_cast<unsigned int&>(lineCount) = x;
    file.close();
}

QStringList Logger::extractCarte()
{
    std::vector<QString> cartes;
    QStringList cartes_trier;

    for (Log log : fileContent)
    {
        cartes.push_back(log.content[2]);
    }

    for (const auto& carte : cartes)
    {
        if (!carteSet.insert(carte).second)
        {continue;}

        cartes_trier.append(carte);
    }
    return cartes_trier;
}
