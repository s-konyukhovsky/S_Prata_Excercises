#include <iostream>

double mean_harm(double x, double y);
double mean_harm(double x, double y)
{
    return (2.0 * x * y)/(x + y);
}

int main() {
    double x = 0, y = 0;
    do{
        std::cout << "Enter x: ";
        std::cin >> x;
        std::cout << "Enter y: ";
        std::cin >> y;
        if(x == 0 || y == 0)
            break;
        std::cout << "Mean: " << mean_harm(x, y) << std::endl;
    }while(true);
    return 0;
}