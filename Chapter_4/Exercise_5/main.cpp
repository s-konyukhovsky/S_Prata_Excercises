#include <iostream>
#include <string>

struct CandyBar
        {
         std::string name;
         double weight;
         unsigned int callories;
        };

int main() {
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    std::cout << "Name: " << snack.name << std::endl;
    std::cout << "Weight: " << snack.weight << std::endl;
    std::cout << "Callories: " << snack.callories << std::endl;
    return 0;
}