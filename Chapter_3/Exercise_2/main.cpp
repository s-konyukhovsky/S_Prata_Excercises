#include <iostream>

int main() {
    unsigned int foots = 0;
    unsigned int inhs = 0;
    double height = 0;
    double weight = 0;
    double bmi = 0;
    const double kg = 2.2;
    const char foot = 12; // inhs
    const double inh = 0.0254;// meters
    std::cout << "Enter height foots: ";
    std::cin >> foots;
    std::cout << "Enter height inhs: ";
    std::cin >> inhs;
    std::cout << "Enter weight: ";
    std::cin >> weight;
    height = inh * (foots * foot + inhs);
    weight = weight / kg;
    bmi = weight / (height * height);
    std::cout << "BMI: " << bmi;
    return 0;
}