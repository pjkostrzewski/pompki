#include "czas.h"
#include <unistd.h>
Czas::Czas()
{

}
void Czas::Start()
{
    start = time(&timer);
}

void Czas::Stop()
{
    stop = time(&timer);
}

int Czas::Difference()
{
    return static_cast<int>(stop - start);
}

bool Czas::Licz(const int & value)
{
    Start();
    Stop();
    time_t temp = 0;
    std::cout<<"rest time: "<<value<<std::endl;
    while(Difference()<value)
    {
        Stop();
        if(temp!=Difference())
        {
            std::cout<<"timer:\t"<<Difference()<<std::endl;
            std::cout<<"\x1b[1A";

        }
        temp=Difference();
    }
    system("clear");
    return true;
}
