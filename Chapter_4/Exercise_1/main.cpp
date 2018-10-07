#include <iostream>
#include <string>

int main() {
    std::string fname, lname, grade, age;
    std::cout << "What is your first name? ";
    getline(std::cin,fname);
    std::cout << "What is your last name? ";
    getline(std::cin,lname);
    std::cout << "What letter grade do you deserve? ";
    getline(std::cin,grade);
    std::cout << "What is your age? ";
    getline(std::cin,age);
    grade[0] += 1;
    std::cout << "Name: " << lname << ", " << fname << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Age: " << age << std::endl;
    return 0;
}