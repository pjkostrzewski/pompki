#ifndef SERIE_H
#define SERIE_H

#include <vector>
#include <iostream>

#include "file_interface.h"
#include "czas.h"

class Serie
{

    std::vector<int> seria;
private:
    file_interface Ifile;
    Czas zegar;
public:
    Serie(const int & a, const int & b = 1) :
        Ifile(a,b)
    {
    seria = Ifile.readSeries();
    }

    void Display(const int & index);
    //void DisplayOne(const int & index);
    void Cwicz(const int & time);
    void waitForEnterKey(const std::string & message);
    void Date();

    int dzienPrzerwy(const int & dzien);
    int czasPrzerwy(const int & dzien);

};

#endif // SERIE_H
