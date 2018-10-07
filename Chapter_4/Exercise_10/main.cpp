#include <iostream>
#include <array>

int main() {
    std::array<double,3> values{};
    double mean = 0;

    for(int i = 0; i < 3; i++)
    {
        std::cout << "Enter " << i << " value: ";
        std::cin >> values[i];
        mean += values[i];
    }
    mean /= 3;
    std::cout << "Mean: " << mean << std::endl;

    return 0;
}