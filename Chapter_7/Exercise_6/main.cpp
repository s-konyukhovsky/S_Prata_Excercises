#include <iostream>

unsigned char Fill_array(double *array, unsigned char size);
void Show_array(double *array, unsigned char size);
void Reverse_array(double *array, unsigned char size);

int main() {
    unsigned char SIZE = 10;
    auto *array = new double[10];
    SIZE = Fill_array(array, SIZE);
    Show_array(array, SIZE);
    Reverse_array(array, SIZE);
    Show_array(array, SIZE);
    delete []array;
    return 0;
}

unsigned char Fill_array(double *array, unsigned char size)
{
    double value = 0;
    unsigned char i = 0;
    std::cout << "Enter array:" << std::endl;

    for(; i < size; i++)
    {
        if(std::cin >> value)
            array[i] = value;
        else
            break;
    }
    return i;
}

void Show_array(double *array, unsigned char size)
{
    std::cout << "Array: ";
    for(unsigned char i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void Reverse_array(double *array, unsigned char size)
{
    double temp_value = 0;
    std::cout << "Reverse array!" << std::endl;
    for(int i = 0, j = size - 1; i < j; i++, j--)
    {
        temp_value = array[i];
        array[i] = array[j];
        array[j] = temp_value;
    }
}