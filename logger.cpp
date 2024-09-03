#include "logger.h"

Logger::Logger(const QString &filepath, const QString &format)
{
    filePath = filepath;


    Counting();
    fileContent = extract(filePath, format);
    fileCartes = extractCarte();

    for (QString carte : fileCartes)
    {
        cartePath.push_back((dir+carte+formatFile));
    }

    //connect->setID(id);
    //connect->setMDP(mdp);
    //connect.test();
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

    //test
    cartes_trier.append("test");

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

void Logger::createFile(QString &dirLogPath, QString &formatfile)
{
    std::vector<QString> cartes;
    std::unordered_set<QString> carteSet;

    for (Log log : fileContent)
    {
        cartes.push_back(log.content[2]);
    }

    for (const auto& carte : cartes)
    {
        if (!carteSet.insert(carte).second)
        {continue;}

        std::ofstream file(dirLogPath.toStdString()+carte.toStdString()+formatfile.toStdString());
        std::ofstream addFile(dirLogPath.toStdString()+carte.toStdString()+formatfile.toStdString(), std::ios::app);

        for (Log log : fileContent)
        {
            if (log.content[2]!=carte)
            {continue;}
            addFile<< log.content[0].toStdString()<<'\n';

            std::cout << log.content[0].toStdString()<< '\n';
        }
        std::cout << "Le fichier " << (carte.toStdString()+".txt") << " a eter creer et des donnees ont eter ecrites dedans." << '\n';
        std::cout<< '\n'<<'\n';
        addFile.close();
        file.close();
    }
}


QList<QPieSlice> Logger::extract4PieChart()
{
    QList<QPieSlice> PieSlices;
    QPieSlice Composant, Soudure, circuit, autre;

    //en cours...
}
