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
vector<Log> ScanErr::readLogsFromFile(const string &filePath) {
    ifstream file(filePath);
    vector<Log> logs;
    string line;

    if (!file.is_open()) {
        cerr << "Erreur lors de l'ouverture du fichier : " << filePath << std::endl;
        return logs;
    }

    unsigned int id=1;
    array<string, 7> content = {line, "", "", "", "", "", ""};
    vector<unsigned int> sim_id;
    while (getline(file, line)) {
        content = {line, "", "", "", "", "", ""};
        logs.emplace_back(0.0, id, sim_id, content);
        id++;
    }


    file.close();
    return logs;
}

// Fonction pour trouver les llogs similaires
vector<Log> ScanErr::findSimilarLogs(vector<Log> &logs, int threshold) {

    set<pair<size_t, size_t>> comparedPairs;
    vector<Log> simlogs;

    for (size_t i = 2; i < logs.size(); ++i) {

        //split i
        logs[i].split();

        for (size_t j = i + 1; j < logs.size(); ++j) {

            //split j
            logs[j].split();

            //vérif double && same article, of, nPanne, comp
            pair<size_t, size_t> logPair = make_pair(i, j);
            if (comparedPairs.find(logPair) == comparedPairs.end()) {

                double similarity = mongeElkanSimilarity(logs[i].content[6], logs[j].content[6]);
                //si sim_ratio>=treshold && =cArticle && =OF && =nPanne && =comp
                if ((similarity >= threshold / 100.0)&&
                    logs[i].content[2]==logs[j].content[2]&&
                    logs[i].content[3]==logs[j].content[3]&&
                    logs[i].content[4]==logs[j].content[4]&&
                    logs[i].content[5]==logs[j].content[5])
                {
                    //ajout id_logs similaire s
                    if (logs[i].sim_id.empty()) {
                        logs[i].sim_id.push_back(logs[j].id);
                    }
                    if (logs[j].sim_id.empty()) {
                        logs[j].sim_id.push_back(logs[i].id);
                    }

                    for (size_t x = 0; x < logs[i].sim_id.size(); ++x) {
                        if (logs[i].sim_id[x]!=logs[j].id) {
                            logs[i].sim_id.push_back(logs[j].id);
                        }
                    }
                    for (size_t x = 0; x < logs[j].sim_id.size(); ++x) {
                        if (logs[j].sim_id[x]!=logs[i].id) {
                            logs[j].sim_id.push_back(logs[i].id);
                        }
                    }

                    simlogs.emplace_back(logs[i]);
                    simlogs.emplace_back(logs[j]);
                    cout << "Log 1: " << logs[i].content[0] << endl;
                    cout << "Log 2: " << logs[j].content[0] << endl;
                    cout << "Similarity: " << similarity * 100 << "%" << endl;
                    cout << "---------------------------" << endl;
                }
                comparedPairs.insert(logPair);
            }
        }
    }
    //storage moy similarity indice
    //
    //

    cout << "---------------------------" << endl;
    cout<<'\n';

    return simlogs;
}

void ScanErr::findRecLogs(const vector<Log>& logs, unsigned int treshold) {

    //recherche d'id similaire
    unsigned int count=0;
    vector<Log> tempsimlogs;
    //archivage des logs récurente
    vector<Log> treshlogs;
    //faut pas se répété
    set<pair<size_t, size_t>> comparedPairs;

    for (size_t i = 0; i < logs.size(); ++i) {

        tempsimlogs.emplace_back(logs[i]);

        for (size_t j = i + 1; j < logs.size(); ++j) {

            pair<size_t, size_t> logPair = make_pair(i, j);
            if (comparedPairs.find(logPair) == comparedPairs.end()) {
                for (unsigned int simid : logs[i].sim_id ) {

                    if (simid == logs[j].id) {
                        count++;
                        tempsimlogs.emplace_back(logs[j]);

                    }
                }

                comparedPairs.insert(logPair);
            }
        }

        if (count >= treshold) {
            treshlogs.emplace_back(logs[i]);
            cout<<"Nombre d'erreur similaire trop important."<<'\n';
            cout<<"Logs similaire:"<<'\n';
            for (size_t x = 0; x < tempsimlogs.size(); ++x) {
                cout<<tempsimlogs[x].content[0]<<'\n';
            }
            cout<<'\n';
            cout<<"Nombre de récurrence: "<<count<<'\n';
            cout << "---------------------------" << endl;
        }
        count = 0;
        tempsimlogs.clear();
    }
}
