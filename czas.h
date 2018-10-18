#ifndef CZAS_H
#define CZAS_H
#include <ctime>
#include <iostream>
#include <stdlib.h>

class Czas
{
private:
    time_t timer;
    time_t start;
    time_t stop;
public:
    Czas();
    void Start();
    void Stop();
    int Difference();
    bool Licz(const int & value);
};

#endif // CZAS_H
