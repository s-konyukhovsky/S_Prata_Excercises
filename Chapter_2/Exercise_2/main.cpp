#include <iostream>

int main() {
    double farlongs = 0.0, yards = 0.0;
    std::cout << "Enter farlongs value: ";
    std::cin >> farlongs;
    yards = farlongs * 220.0;
    std::cout << "Yards: " << yards << std::endl;
    return 0;
}