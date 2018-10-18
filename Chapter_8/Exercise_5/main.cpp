#include <iostream>

template <typename T>
T max5(const T arr[])
{
    T max = arr[0];
    for(int i = 0; i < 5; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }
    return max;
};


int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    double arr2[] = {1.0, 2.0, 3.0, 4.0, 6.0};
    std::cout << "Max array 1: " << max5<int>(arr1) << std::endl;
    std::cout << "Max array 2: " << max5<double>(arr2) << std::endl;
    return 0;
}