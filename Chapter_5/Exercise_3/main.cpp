#include <iostream>

int main() {
    unsigned int num = 0, sum = 0;

    do{
        std::cout << "Enter num: ";
        std::cin >> num;
        sum += num;
        std::cout << "Sum: " << sum << std::endl;
    }
    while(num != 0);
    return 0;
}