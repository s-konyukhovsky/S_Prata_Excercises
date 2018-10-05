#include <iostream>

double years2dist(double value);

int main() {
    double years = 0.0;
    std::cout << "Enter the number of light years: ";
    std::cin >> years;
    std::cout << years << " light years = " << years2dist(years) << " astronomical units." << std::endl;
    return 0;
}

double years2dist(double value)
{
    return value * 63240;
}