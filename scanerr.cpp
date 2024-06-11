#include "scanerr.h"

ScanErr::ScanErr() {}


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
    vector<unsigned int> sim_id;
    while (getline(file, line)) {
        logs.emplace_back(0.0, id, sim_id, line);
        id++;
    }


    file.close();
    return logs;
}

// Fonction pour trouver les llogs similaires
vector<Log> ScanErr::findSimilarLogs(vector<Log> &logs, int threshold) {

    vector<Log> simlogs;
    bool simlogbool;

    for (size_t i = 2; i < logs.size(); ++i) {

        simlogbool = true;

        //split i
        logs[i].split();

        for (size_t j = i + 1; j < logs.size(); ++j) {

            //split j
            logs[j].split();

            double similarity = mongeElkanSimilarity(logs[i].content[10], logs[j].content[10]);
            //si sim_ratio>=treshold && =nCarte && =cArticle && =nPanne && =comp
            if ((similarity >= threshold / 100.0)&&
                logs[i].content[2]==logs[j].content[2]&&
                logs[i].content[3]==logs[j].content[3]&&
                logs[i].content[7]==logs[j].content[7]&&
                logs[i].content[8]==logs[j].content[8])
            {
                //ajout id_logs similaire s
                if (logs[i].sim_id.empty()) {
                    logs[i].sim_id.push_back(logs[j].id);
                } else {
                    unsigned int countsimid=0;
                    for (size_t x = 0; x < logs[i].sim_id.size(); ++x) {

                        if (logs[i].sim_id[x]!=logs[j].id) {
                            countsimid++;
                        }
                    }
                    if (logs[i].sim_id.size()==countsimid) {
                        logs[i].sim_id.push_back(logs[j].id);
                    }
                }


                if (logs[j].sim_id.empty()) {
                    logs[j].sim_id.push_back(logs[i].id);
                } else {
                    unsigned int countsimid=0;
                    for (size_t x = 0; x < logs[j].sim_id.size(); ++x) {

                        if (logs[j].sim_id[x]!=logs[i].id) {
                            countsimid++;
                        }
                    }
                    if (logs[i].sim_id.size()==countsimid) {
                        logs[i].sim_id.push_back(logs[j].id);
                    }
                }
                unsigned int countsimlogs=0;
                for (size_t x = 0; x < simlogs.size(); ++x) {
                    if (logs[j].id!=simlogs[x].id) {
                        countsimlogs++;
                    }
                }
                if (countsimlogs==simlogs.size()) {
                    simlogs.emplace_back(logs[j]);
                }
                countsimlogs=0;
                if (simlogbool) {
                    for (size_t x = 0; x < simlogs.size(); ++x) {
                        if (logs[i].id!=simlogs[x].id) {
                            countsimlogs++;
                        }
                    }
                    if (countsimlogs==simlogs.size()) {
                        simlogs.emplace_back(logs[i]);
                        simlogbool = false;
                    }
                }

                cout << "Log 1: " << logs[i].content[0] << endl;
                cout << "Log 2: " << logs[j].content[0] << endl;
                cout << "Similarity: " << similarity * 100 << "%" << endl;
                cout << "---------------------------" << endl;
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
    unsigned int count=1;
    vector<Log> tempsimlogs;
    //archivage des logs récurente
    vector<Log> treshlogs;

    for (size_t i = 0; i < logs.size(); ++i) {

        tempsimlogs.emplace_back(logs[i]);
        for (size_t j = i + 1; j < logs.size(); ++j) {

            for (unsigned int simid : logs[i].sim_id ) {

                //cout<<"log "<<i<<": "<<simid<<'\n';
                if (simid == logs[j].id) {
                    count++;
                    tempsimlogs.emplace_back(logs[j]);
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
        }
        count = 1;

        tempsimlogs.clear();
    }
}
