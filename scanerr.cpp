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
    for (size_t i = 0; i < logs.size(); ++i) {
        for (size_t j = i + 1; j < logs.size(); ++j) {
            int distance = levenshteinDistance(logs[i], logs[j]);
            double similarity = 1.0 - static_cast<double>(distance) / std::max(logs[i].size(), logs[j].size());

            if (similarity >= threshold / 100.0) {
                std::cout << "Log 1: " << logs[i] << std::endl;
                std::cout << "Log 2: " << logs[j] << std::endl;
                std::cout << "Similarity: " << similarity * 100 << "%" << std::endl;
                std::cout << "---------------------------" << std::endl;
            }
        }
    }
}
