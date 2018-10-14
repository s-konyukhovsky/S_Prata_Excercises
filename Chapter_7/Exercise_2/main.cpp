#include <iostream>
#include <vector>

double calc_mean(std::vector<double> &arr);
void show_array(std::vector<double> &arr);
void fill_array(std::vector<double> &arr);

int main() {
    std::vector<double> arr;
    fill_array(arr);
    show_array(arr);
    return 0;
}

void fill_array(std::vector<double> &arr)
{
    const unsigned int size = 10;
    double value = 0;
    std::cout << "Enter values:" << std::endl;
    for(unsigned int i = 0; i < size; i++)
    {
        if(std::cin >> value)
           arr.push_back(value);
        else
            break;
    }
}

void show_array(std::vector<double> &arr)
{
    double mean = 0;
    for(auto value : arr)
    {
        mean += value;
        std::cout << value << " ";
    }
    mean /= arr.size();
    std::cout << std::endl << "Mean: " << mean << std::endl;
}