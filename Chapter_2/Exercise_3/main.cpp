#include <iostream>

void printStr1();
void printStr2();

int main() {
    printStr1();
    printStr1();
    printStr2();
    printStr2();
    return 0;
}

void printStr1()
{
    std::cout << "Three blind mice" << std::endl;
}

void printStr2()
{
    std::cout << "See how they run" << std::endl;
}