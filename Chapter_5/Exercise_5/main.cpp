#include <iostream>
#include <string>
#include <array>
int main() {
    std::array<std::string, 12> months = {"January", "February", "March", "April", "May", "June", "Jule", "August", "September", "October", "November", "Decemper"};
    std::array<unsigned int, 12> values{};
    double sum = 0;

    for(int i = 0; i < 12; i++)
    {
        std::cout << "Enter count for " << months[i] << ": ";
        std::cin >> values[i];
        sum += values[i];
    }

    std::cout << "Sum for year: " << sum;

    return 0;
}