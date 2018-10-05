#include <iostream>

double cel2fahr(double temperature);

int main() {
    double celsius = 0.0;
    std::cout << "Enter Celsius value:";
    std::cin >> celsius;
    std::cout << celsius << " degrees Celsius is " << cel2fahr(celsius) << " degrees Fahrenheit";
    return 0;
}

double cel2fahr(double temperature)
{
    return (1.8 * temperature) + 32;
}
