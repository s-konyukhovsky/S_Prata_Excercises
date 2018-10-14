#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main() {
    double total, choices, total2;
    std::cout << "Enter the total number of choices on the game card and" << std::endl;
    std::cout << "the number of picks allowed:" << std::endl;
    while((std::cin >> total >> choices >> total2) && choices <= total){
        std::cout << "You have one chance in ";
        std::cout << probability(total, choices) * probability(total2, 1);
        std::cout << " of winning. \n";
        std::cout << "Next three numbers (q to quit): ";
    }
    return 0;
}

long double probability(unsigned numbers, unsigned picks) {
    long double result = 1.0;
    long double n;
    unsigned p;
    for(n = numbers, p = picks; p > 0; n--, p--){
        result *= (n/p);
    }
    return result;
}