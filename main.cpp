#include <iostream>
#include <unistd.h>

#include "czas.h"
#include "serie.h"
#include "week.h"

using namespace std;


int main()
{
int tydzien;
int dzien;

system("clear");
file_interface plik;
cout<<"twoj ostatni trening: "<<endl;
plik.readDate();
cout<<"Ktory tydzien?:   ";
cin>>tydzien;
cout<<"Ktory dzien?:   ";
cin>>dzien;
system("clear");

Serie seria(tydzien,dzien); // w konstruktorze numer pliku (tydzien)
const int time = seria.czasPrzerwy(dzien);
seria.Cwicz(time);
cout<<"Liczba dni odpoczynku: "<<seria.dzienPrzerwy(dzien)<<endl<<endl<<endl<<endl<<endl;
}


