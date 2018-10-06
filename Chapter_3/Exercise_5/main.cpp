#include <iostream>

int main() {
    long world = 0, country = 0;
    double percent = 0;
    std::cout << "Enter the world population: ";
    std::cin >> world;
    std::cout << "Enter your country population: ";
    std::cin >> country;
    percent = ((double)country / (double)world) * 100.0;
    std::cout << "The population of your country is " << percent << "% of the world.";
    return 0;
}