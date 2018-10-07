#include <iostream>
#include <string>
#include <array>

#define YEARS_NUM 3
#define MONTHS_NUM 12

int main() {

    std::array<std::string, MONTHS_NUM> months = {"January", "February", "March", "April", "May", "June", "Jule", "August", "September", "October", "November", "Decemper"};
    std::array<std::array<unsigned int, MONTHS_NUM>, YEARS_NUM> values{};
    std::array<double, YEARS_NUM> sum{};
    double sum3years = 0;

    for(int years = 0; years < YEARS_NUM; years++) {
        sum[years] = 0;
        for(int month = 0; month < MONTHS_NUM; month++)
        {
            std::cout << "Year: " << years + 1 << ", Enter count for " << months[month] << ": ";
            std::cin >> values[years][month];
            sum[years] += values[years][month];
        }
        std::cout << "Sum for " << years + 1 <<" year: " << sum[years] << std::endl;
        sum3years += sum[years];
    }
    std::cout << "Sum for " << YEARS_NUM <<" years: " << sum3years;

    return 0;
}