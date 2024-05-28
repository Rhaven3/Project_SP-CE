#include "scanerr.h"

ScanErr::ScanErr() {}

// Fonction pour calculer la distance de Levenshtein
int ScanErr::levenshteinDistance(const string &s1, const string &s2) {
    const size_t len1 = s1.size(), len2 = s2.size();
    vector<vector<unsigned int>> d(len1 + 1, vector<unsigned int>(len2 + 1));

    d[0][0] = 0;
    for(unsigned int i = 1; i <= len1; ++i) d[i][0] = i;
    for(unsigned int i = 1; i <= len2; ++i) d[0][i] = i;

    for(unsigned int i = 1; i <= len1; ++i)
        for(unsigned int j = 1; j <= len2; ++j)
            d[i][j] = std::min({ d[i - 1][j] + 1, d[i][j - 1] + 1, d[i - 1][j - 1] + (s1[i - 1] == s2[j - 1] ? 0 : 1) });

    return d[len1][len2];
}

//Levenshtein Similarité
double ScanErr::levenshteinSimilarity(const string &s1, const string &s2) {
    int dist = ScanErr::levenshteinDistance(s1, s2);
    return 1.0 - static_cast<double>(dist) / max(s1.size(), s2.size());
}

// Fonction pour diviser une chaîne en tokens
vector<string> ScanErr::tokenize(const string &s) {
    istringstream iss(s);
    return vector<string>(istream_iterator<string>{iss}, istream_iterator<string>());
}

// Monge Elkan Similarité
double ScanErr::mongeElkanSimilarity(const std::string &s1, const std::string &s2) {
    vector<string> tokens1 = tokenize(s1);
    vector<string> tokens2 = tokenize(s2);

    double totalMaxSimilarity = 0.0;

    for (const auto &token1 : tokens1) {
        double maxSimilarity = 0.0;
        for (const auto &token2 : tokens2) {
            double similarity = levenshteinSimilarity(token1, token2);
            if (similarity > maxSimilarity) {
                maxSimilarity = similarity;
            }
        }
        totalMaxSimilarity += maxSimilarity;
    }

    return totalMaxSimilarity / tokens1.size();
}


// Fonction pour lire les logs depuis un fichier
vector<string> ScanErr::readLogsFromFile(const string &filePath) {
    ifstream file(filePath);
    vector<string> logs;
    string line;

    if (!file.is_open()) {
        cerr << "Erreur lors de l'ouverture du fichier : " << filePath << std::endl;
        return logs;
    }

    while (getline(file, line)) {
        logs.push_back(line);
    }

    file.close();
    return logs;
}

// Fonction pour trouver les llogs similaires
void ScanErr::findSimilarLogs(const vector<string> &logs, int threshold) {



    set<pair<size_t, size_t>> comparedPairs;

    for (size_t i = 2; i < logs.size(); ++i) {

        //split i
        Qlog= QString::fromStdString(logs[i]);
        QlogLi1 = Qlog.split(u'\t');
        QlogLi = QlogLi1.at(1).split(u'|');

        date[0]=QlogLi1.at(0).toStdString();
        cArticle[0]=QlogLi.at(0).toStdString();
        OF[0]=QlogLi.at(1).toStdString();
        nPanne[0]=QlogLi.at(2).toStdString();
        comp[0]=QlogLi.at(3).toStdString();
        commentaire[0]=QlogLi.at(4).toStdString();

        for (size_t j = i + 1; j < logs.size(); ++j) {

            //split j
            Qlog= QString::fromStdString(logs[j]);
            QlogLj1 = Qlog.split(u'\t');
            QlogLj = QlogLj1.at(1).split(u'|');

            date[1]=QlogLj1.at(0).toStdString();
            cArticle[1]=QlogLj.at(0).toStdString();
            OF[1]=QlogLj.at(1).toStdString();
            nPanne[1]=QlogLj.at(2).toStdString();
            comp[1]=QlogLj.at(3).toStdString();
            commentaire[1]=QlogLj.at(4).toStdString();



            //vérif double && same article, of, nPanne, comp
            pair<size_t, size_t> logPair = make_pair(i, j);
            if (comparedPairs.find(logPair) == comparedPairs.end()) {

                double similarity = mongeElkanSimilarity(commentaire[0], commentaire[1]);
                if ((similarity >= threshold / 100.0)&& cArticle[0]==cArticle[1]&& OF[0]==OF[1]&& nPanne[0]==nPanne[1]&& comp[0]==comp[1]) {
                    cout << "Log 1: " << logs[i] << endl;
                    cout << "Log 2: " << logs[j] << endl;
                    cout << "Similarity: " << similarity * 100 << "%" << endl;
                    cout << "---------------------------" << endl;
                }

            comparedPairs.insert(logPair);
            }
        }
    }
}
