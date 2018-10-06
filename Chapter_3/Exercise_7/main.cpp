#include <iostream>

int main() {
    double litres_per_km = 0, mills_per_gallon = 0;
    const double    km_100 = 62.14,/*milles*/
                    mile_1 = (1/km_100),/*1 mile*/
                    gallon_1 = 3.875;/*litters*/

    std::cout << "Enter l/km: ";
    std::cin >> litres_per_km;
    mills_per_gallon = gallon_1 / litres_per_km / mile_1;
    std::cout << "Milles/Gallons: " << mills_per_gallon;
    return 0;
}