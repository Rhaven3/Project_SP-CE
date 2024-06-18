#include "logger.h"

Logger::Logger(const QString &filepath, const QString &format) {
    filePath = filepath;

    fileContent = extract(filePath, format);
}

QString Logger::extract(const QString &filepath, const QString &format, const unsigned short header) {
    QString line, content;
    std::string string_line;


    std::ifstream file(filepath.toStdString());

    /* Message d'erreur à créer
     *
    if (!file.is_open()) {
        std::cerr << "Erreur lors de l'ouverture du fichier : " << filePath << std::endl;
        return;
    }
    */
    int x=0;
    while (std::getline(file, string_line)) {
        line = QString::fromStdString(string_line);
        x++;
        (x>=header) ? line += format : line;
        content.append(line);
    }
    return content;
}

void Logger::view() {

}
