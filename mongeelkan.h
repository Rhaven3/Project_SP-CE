#ifndef MONGEELKAN_H
#define MONGEELKAN_H

#include <vector>
#include <sstream>
#include <iterator>
#include <algorithm>

using namespace std;

int levenshteinDistance(const string&, const string&);
double levenshteinSimilarity(const string&, const string&);
vector<string> tokenize(const string&);
double mongeElkanSimilarity(const string&, const string&, bool tokens=true);


#endif // MONGEELKAN_H
