#include "extractor.h"

Extractor::Extractor() {}

//extractLogD
void Extractor::ExtractLogD() {

}
    //extractOF
void Extractor::ExtractOF(){

}

void Extractor::LogSpliter() {
    string filePath="../Log/log_2024-05-23.txt";
    ifstream file(filePath); // Ouvrir le fichier en lecture

    if (!file.is_open()) {
        cerr << "Erreur lors de l'ouverture du fichier : " << filePath << endl;
        return;
    }

    string line;
    while (getline(file, line)) { // Lire le fichier ligne par ligne
        cout << line << endl; // Afficher chaque ligne
    }

    file.close(); // Fermer le fichier
}
