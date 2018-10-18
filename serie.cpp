#include "serie.h"

void Serie::Display(const int & index) //index do podkreslenia
{
    int counter = 0;
    for(auto a : seria)
    {
        if(counter==index)
        {
            printf("\x1b[41m ");
            std::cout<<a<<" \t";
            printf("\x1b[0m");

        }
        else std::cout<<a<<"\t";
        counter++;
    }
    std::cout<<std::endl;
}

void Serie::Cwicz(const int & time)
{
    waitForEnterKey(std::string());
    for(int i=0; i<seria.size(); i++)
    {
    Display(i);
    waitForEnterKey("Przycisnij enter jesli skonczyles serie!");
    zegar.Licz(time);
    }
Ifile.saveDate();
}

void Serie::waitForEnterKey(const std::string & message)
{
    std::cin.clear();
    std::cin.sync();
    std::cout<<message<<std::endl;
    std::cin.ignore();
    system("clear");
}

void Serie::Date()
{
    Ifile.readDate();
}

int Serie::dzienPrzerwy(const int & dzien)
{
    if(dzien==3) return 2;
    else return 1;
}

int Serie::czasPrzerwy(const int & dzien)
{
    if(dzien == 1) return 60;
    else return 45;
}
