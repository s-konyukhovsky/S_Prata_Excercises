#include <iostream>

int main() {
    unsigned int num1 = 0, num2 = 0, sum = 0;

    std::cout << "Enter N1: ";
    std::cin >> num1;
    std::cout << "Enter N2: ";
    std::cin >> num2;
    for(unsigned int i = num1; i <= num2; i++)
        sum += i;
    std::cout << "Sum: " << sum;
    return 0;
}