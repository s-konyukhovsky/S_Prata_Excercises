#include <iostream>


int main() {
    double bank_1 = 100, bank_2 = 100;
    unsigned int years = 0;
    do{
        years++;
        bank_1 += 100 * 0.1;
        bank_2 += bank_2 * 0.05;
        std::cout << "Year: " << years << ", Bank_1 = " << bank_1;
        std::cout << ", Bank_2 = " << bank_2 << std::endl;

    }while(bank_2 < bank_1);
    return 0;
}