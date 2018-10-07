#include <iostream>
#include <array>

int main() {
    unsigned int str_num = 0;

    std::cout << "Введите количество строк: ";
    std::cin >> str_num;


    for(unsigned int i = 1; i <= str_num; i++){
        for(unsigned int j = 0; j < str_num - i; j++)
            std::cout << ".";
        for(unsigned int j = str_num - i; j < str_num; j++)
            std::cout << "*";
        std::cout << std::endl;
    }

    return 0;
}