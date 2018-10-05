#include <iostream>

int main() {
    int age = 0;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Your age in months: " << age * 12 << std::endl;
    return 0;
}