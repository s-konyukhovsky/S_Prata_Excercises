#include <iostream>
#include <string>
#include <cstring>

struct CandyBar
{
    std::string name;
    double weight;
    unsigned int callories;
};

int main() {

    auto *snack = new CandyBar[3];
    snack[0] = {"Snake1", 1.3, 1000};
    snack[1] = {"Snake2", 1.4, 2000};
    snack[2] = {"Snake3", 1.5, 3000};

    for(int i = 0; i < 3; i++)
    {
        std::cout << "Name: " << snack[i].name << std::endl;
        std::cout << "Weight: " << snack[i].weight << std::endl;
        std::cout << "Callories: " << snack[i].callories << std::endl;
        std::cout << std::endl;
    }
    delete []snack;
    return 0;
}
