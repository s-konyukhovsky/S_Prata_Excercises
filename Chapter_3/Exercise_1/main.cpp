#include <iostream>

int main() {
    const char oneFoot = 12;
    unsigned int height = 0, foots = 0, inhs = 0;
    std::cout << "Enter your height in inhs:___\b\b\b";
    std::cin >> height;
    foots = height / oneFoot;
    inhs = height % oneFoot;
    std::cout << "Your height: " << foots << " foots and " << inhs << " inhs" << std::endl;
    return 0;
}