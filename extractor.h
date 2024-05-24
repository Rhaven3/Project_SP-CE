#ifndef EXTRACTOR_H
#define EXTRACTOR_H

#include <fstream>
#include <iostream>
using namespace std;
class Extractor
{
public:
    Extractor();

    inline void ExtractLogD();
    inline void ExtractOF();
    inline void LogSpliter();
};

#endif // EXTRACTOR_H
