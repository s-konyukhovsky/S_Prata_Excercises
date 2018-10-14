#include <iostream>
#include <limits>


double* fill_array(double *begin, const double *end);
void show_array (double *begin, const double *end);
void revalue(double, double *begin, const double *end);

int main()
{
    const int size = 5;
    double properties[size]{};
    double *end = nullptr;

    end = fill_array(properties, end);
    show_array(properties, end);
    if ((end - properties) > 0)
    {
        std::cout << "Enter revaluation factor: ";
        double factor;
        while (!(std::cin >> factor))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Bad input; Please enter a number: ";
        }
        revalue (factor, properties, end);
        show_array(properties, end);
    }
    std::cout << "Done.\n";
    return 0;
}

double* fill_array(double *begin, const double *end)
{
    double *pt = nullptr;
    double value = 0;
    int i = 0;

    for (pt = begin; pt != end; pt++, i++)
    {
        std::cout << "Enter value #" << i << ": ";
        if (!(std::cin >> value))    // bad input
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
        if(value < 0)
            break;
        *pt = value;
    }
    return pt;
}

void show_array(double *begin, const double *end)
{
    double *pt = nullptr;
    int i = 1;
    for (pt = begin; pt != end; pt++, i++)
    {
        std::cout << "Property #" << i << ": $";
        std::cout << *pt << std::endl;
    }
}

void revalue(double r, double *begin, const double *end)
{
    double *pt;
    for (pt = begin; pt != end; pt++)
        *pt *= r;
}
