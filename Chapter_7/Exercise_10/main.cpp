#include <iostream>

typedef double (*p_func)(double, double);
double add(double x, double y);
double mult(double x, double y);
double div(double x, double y);
double calculate(double x, double y, p_func ptr);


int main() {
    const int func_num = 3;
    double x, y;
    p_func f_ptr[func_num] = {add, mult, div};

    for(auto func : f_ptr)
    {
        std::cout << "Enter X: ";
        std::cin >> x;
        std::cout << "Enter Y: ";
        std::cin >> y;
        std::cout << "Result: " << calculate(x, y, func) << std::endl;
    }


    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double mult(double x, double y)
{
    return x * y;
}

double div(double x, double y)
{
    return x / y;
}

double calculate(double x, double y, p_func ptr)
{
    return ptr(x,y);
}