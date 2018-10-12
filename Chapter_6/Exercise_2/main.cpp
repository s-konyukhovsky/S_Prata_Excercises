#include <iostream>
#include <vector>
#include <array>

int main() {
    const unsigned char size = 10;
    unsigned int i = 0,
                 inSymb = 0;
    double mean = 0.0;
    std::array<double, size> donation{};

    // Enter num
    for(; i < size; i++){
        std::cout << "Enter " << i + 1 << " donation: ";
        std::cin >> donation[i];
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cout << "Finish!" << std::endl;
            break;
        }
    }

    // Mean calc
    inSymb = i;
    for(; i > 0; i--)
        mean += donation[i];
    mean /= inSymb;

    /* Result*/
    std::cout << "Mean: " << mean << std::endl;
    for(i = inSymb; i > 0 ; i--) {
        if(donation[i] < mean)
            inSymb--;
    }
    std::cout << "Under mean: " << inSymb << std::endl;
    return 0;
}