#ifndef FILE_INTERFACE_H
#define FILE_INTERFACE_H
#include <string>
#include <fstream>
#include <vector>
#include <iostream>
#include <boost/algorithm/string.hpp>
#include <ctime>

class file_interface
{
private:
    std::fstream file;
    std::string path = "/home/dev33/trening/pompki/zestawy/week";
    std::string ostatniTrening = "/home/dev33/trening/pompki/zestawy/last.txt";
    const int number;
    const int day;

public:
    file_interface(const int & number_ = 0, const int & day_ = 1) :
        number{number_},
        day{day_}
    {
        path+=std::to_string(number);
        path+="_";
        path+=std::to_string(day);
        path+=".txt";
    }
    void openToRead(const std::string & path_);
    void openToWrite(const std::string & path_);
    void Close();
    std::vector<int> readSeries();
    void readDate();
    void saveDate();
    void Write();

};

#endif // FILE_INTERFACE_H
