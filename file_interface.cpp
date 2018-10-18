#include "file_interface.h"
#include <boost/log/trivial.hpp>

void file_interface::openToRead(const std::string & path_)
{
    file.open(path_,std::ios::in);
}

void file_interface::openToWrite(const std::string & path_)
{
    file.open(path_, std::ios::out);
}

void file_interface::Close()
{

    file.close();
}

std::vector<int> file_interface::readSeries() //czytanie serii z pliku
{
    openToRead(path);
    if(file.fail()) return {};
    std::string temp;
    std::vector<std::string> result;
    std::vector<int> result2;

    file>>temp;
    boost::split(result,temp,[](char c){return c == ',';}) ;

    for( auto & a : result)
    {
        result2.push_back(std::stoi(a));
    }
    Close();
    return result2;
}

void file_interface::readDate()
{
    time_t result;
    openToRead(ostatniTrening);
    file>>result;
    std::cout<<asctime(localtime(&result))<<std::endl;
    Close();
}
void file_interface::saveDate()
{
    openToWrite(ostatniTrening);
    time_t now;
    time(&now);
    file<<std::to_string(now);
    Close();
}
