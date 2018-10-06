#include <iostream>

int main() {
    double degrees = 0, minutes = 0, seconds = 0;
    double result = 0.0;
    const char minute = 60; /*seconds*/
    const char degree = 60; /*minutes*/
    std::cout << "Enter a latitude in degrees, minutes, and seconds:" << std::endl;
    std::cout << "First, enter the degrees: ";
    std::cin >> degrees;
    std::cout << "Enter the minutes: ";
    std::cin >> minutes;
    std::cout << "Enter the seconds: ";
    std::cin >> seconds;
    result = degrees + minutes / degree + seconds / minute / degree;
    std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << "seconds" << " = " << result << " degrees";
    return 0;
}