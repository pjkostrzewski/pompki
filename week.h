#ifndef WEEK_H
#define WEEK_H
#include <vector>

class Week
{
private:
    std::vector<int> firstDay = {18,16,15,15,21};
    std::vector<int> secondDay = {2,2,2,2,2};
    std::vector<int> thirdDay = {3,3,3};

public:
    Week();
};

#endif // WEEK_H
