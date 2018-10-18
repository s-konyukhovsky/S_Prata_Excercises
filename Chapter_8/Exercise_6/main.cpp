#include <iostream>
#include <cstring>

template <typename T>
T maxn(const T *arr, int size);

const char* maxn(const char **arr, int size){
    auto *max = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(strlen(max) < strlen(arr[i]))
            max = arr[i];
    }
    return max;
};


int main() {
    const int INT_SIZE = 6, DBL_SIZE = 4, STR_SIZE = 5;
    const char *str_arr[STR_SIZE] = {"Test1", "Test2", "Test3", "MAX_STR_LEN", "Test4"};
    const double double_arr[DBL_SIZE] = {1.0, 2.0, 3.0, 4.2};
    const int int_arr[INT_SIZE] = {1, 2, 3, 4, 5, 6};
    std::cout << "Max double: " << maxn(double_arr, DBL_SIZE) << std::endl;
    std::cout << "Max int: " << maxn(int_arr, INT_SIZE) << std::endl;
    std::cout << "Max str: " << maxn(str_arr, STR_SIZE) << std::endl;
    return 0;
}


template <typename T>
T maxn(const T *arr, int size){
    T max = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }
    return max;
};

