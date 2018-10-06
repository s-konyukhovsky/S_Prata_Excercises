#include <iostream>

int main() {
    double mills = 0, gallons = 0;
    std::cout << "Enter mills:";
    std::cin >> mills;
    std::cout << "Enter gallons:";
    std::cin >> gallons;
    std::cout << "Mills / Gallons: " << mills / gallons;

    return 0;
}