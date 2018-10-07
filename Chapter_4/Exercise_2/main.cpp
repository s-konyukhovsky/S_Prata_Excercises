#include <iostream>
#include <string>

int main() {
    std::string name, desert;
    std::cout << "Enter your name: " << std::endl;
    getline(std::cin, name);
    std::cout << "Enter your favorite desert:" << std::endl;
    getline(std::cin, desert);
    std::cout << "I have some delicious " << desert << " for you, " << name << "." << std::endl;
    return 0;
}