#include <iostream>
#include <cstring>

const int SLEN=50;

struct CandyBar{
    char name[50]{};
    double weight{};
    int kkal{};
};


void initCandy(CandyBar &candy,const char *name= "Milenium Munch", const double weight = 2.85, const int kkal = 350);
void printCandy(const CandyBar &candy);

int main() {
    CandyBar candy1, candy2;
    initCandy(candy1);
    initCandy(candy2, "Candy", 2, 1000);
    printCandy(candy1);
    printCandy(candy2);
    return 0;
}

void initCandy(CandyBar &candy,const char *name, const double weight, const int kkal)
{
    strcpy(candy.name, name);
    candy.weight = weight;
    candy.kkal = kkal;
}

void printCandy(const CandyBar &candy)
{
    std::cout << "Name: " << candy.name << std::endl;
    std::cout << "Weight: " << candy.weight << std::endl;
    std::cout << "Kkal: " << candy.kkal << std::endl;
}