#include "mongeelkan.h"


// Fonction pour calculer la distance de Levenshtein
int levenshteinDistance(const string &s1, const string &s2) {
    const size_t len1 = s1.size(), len2 = s2.size();
    vector<vector<unsigned int>> d(len1 + 1, vector<unsigned int>(len2 + 1));

    d[0][0] = 0;
    for(unsigned int i = 1; i <= len1; ++i) d[i][0] = i;
    for(unsigned int i = 1; i <= len2; ++i) d[0][i] = i;

    for(unsigned int i = 1; i <= len1; ++i)
        for(unsigned int j = 1; j <= len2; ++j)
            d[i][j] = min({ d[i - 1][j] + 1, d[i][j - 1] + 1, d[i - 1][j - 1] + (s1[i - 1] == s2[j - 1] ? 0 : 1) });

    return d[len1][len2];
}

//Levenshtein Similarité
double levenshteinSimilarity(const string &s1, const string &s2) {
    int dist = levenshteinDistance(s1, s2);
    return 1.0 - static_cast<double>(dist) / max(s1.size(), s2.size());
}

// Fonction pour diviser une chaîne en tokens
vector<string> tokenize(const string &s) {
    istringstream iss(s);
    return vector<string>(istream_iterator<string>{iss}, istream_iterator<string>());
}

// Monge Elkan Similarité
double mongeElkanSimilarity(const string &s1, const string &s2, bool tokens) {
    vector<string> tokens1;
    vector<string> tokens2;

    if (tokens) {
        tokens1 = tokenize(s1);
        tokens2 = tokenize(s2);
    }

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
