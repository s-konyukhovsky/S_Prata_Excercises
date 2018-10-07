#include <iostream>
#include <string>

int main() {
    std::string name, lname, result;

    std::cout << "Enter your first name: ";
    getline(std::cin, name);
    std::cout << "Enter your last name: ";
    getline(std::cin, lname);
    result = name + ", " + lname;
    std::cout << "Here's the information in a single string: " << result;
    return 0;
}