#include <iostream>

double calcTax(unsigned int &tvarps, unsigned int value, double percent);
double updateTax(unsigned int &tvarps, unsigned char &state);

int main() {
    unsigned int tvarps;
    unsigned char state;
    double tax;

    while(true)
    {
        tvarps = 0;
        tax = 0;
        state = 0;
        std::cout << "Enter tvarps value: ";
        std::cin >> tvarps;
        if(std::cin.fail())
            break;

        while(tvarps > 0)
            tax += updateTax(tvarps, state);

        std::cout << "Tax: " << tax << std::endl;
    }
    return 0;
}

double updateTax(unsigned int &tvarps, unsigned char &state)
{
    double tax = 0;
    switch(state)
    {
        case 0:
            tax = calcTax(tvarps, 5000, 0);
            state++;
            break;
        case 1:
            tax = calcTax(tvarps, 10000, 0.10);
            state++;
            break;
        case 2:
            tax = calcTax(tvarps, 20000, 0.15);
            state++;
            break;
        default:
            tax = tvarps * 0.20;
            tvarps = 0;
            state = 0;
            break;
    }
    return tax;
}

double calcTax(unsigned int &tvarps, unsigned int value, double percent)
{
    double tax = 0;
    if(tvarps <= value)
    {
        tax = tvarps * percent;
        tvarps = 0;
    } else{
        tax = value * percent;
        tvarps -= value;
    }
    return tax;
}