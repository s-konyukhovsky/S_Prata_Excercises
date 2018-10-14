#include <iostream>

unsigned int factorial(unsigned int n);

int main() {
    unsigned int n = 0;
    std::cout << "Factorial ";
    std::cin >> n;
    std::cout << " = " << factorial(n) << std::endl;
    return 0;
}

unsigned int factorial(unsigned int n){
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}