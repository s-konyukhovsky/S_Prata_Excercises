#include <iostream>
#include <string>
#include <array>

const int Seasons = 4;
const char Snames[Seasons][25] = {"Spring", "Summer", "Fall", "Winter"};
struct _expenses{
    double value[4]{};
};


void fill(double *pa);
void fill(_expenses *pa);
void show(double *da);
void show(_expenses da);

int main() {

    double expenses[Seasons]{};
    _expenses expenses2;
    fill(expenses);
    show(expenses);
    fill(&expenses2);
    show(expenses2);
    return 0;
}

void fill(double *pa)
{
    for(int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa[i];
    }
}

void show(double *da)
{
    double total = 0.0;
    std::cout << std::endl << "EXPENSES:" << std::endl;
    for(int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da[i] << std::endl;
        total += da[i];
    }
    std::cout << "Total expences: $" << total << std::endl;
}

void fill(_expenses *pa)
{
    for(int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa->value[i];
    }
}

void show(_expenses da)
{
    double total = 0.0;
    std::cout << std::endl << "EXPENSES:" << std::endl;
    for(int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da.value[i] << std::endl;
        total += da.value[i];
    }
    std::cout << "Total expences: $" << total << std::endl;
}