#include <iostream>
#include <cstring>

int main() {
    char name[64] = {0};
    char lname[64] = {0};
    char result[128] = {0};

    std::cout << "Enter your first name: ";
    std::cin.getline(name,64);
    std::cout << "Enter your last name: ";
    std::cin.getline(lname,64);
    strcat(result, name);
    strcat(result, ", ");
    strcat(result, lname);
    std::cout << "Here's the information in a single string: " << result;
    return 0;
}