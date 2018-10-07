#include <iostream>
#include <string>

struct pizza_info
{
    std::string company_name;
    double diameter;
    double weight;
};

int main() {
    pizza_info pizza;
    std::cout << "Enter company_name: ";
    getline(std::cin, pizza.company_name);
    std::cout << "Enter pizza diameter: ";
    std::cin >> pizza.diameter;
    std::cout << "Enter pizza weight: ";
    std::cin >> pizza.weight;
    std::cout << std::endl;
    std::cout << "Pizza company: " << pizza.company_name << std::endl;
    std::cout << "Pizza weight: " << pizza.weight << std::endl;
    std::cout << "Pizza diameter: " << pizza.diameter << std::endl;
    return 0;
}
