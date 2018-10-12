#include <iostream>
#include <cstring>

int main() {
    const char ctrl_symb[] = "cptg";
    char ch = 0;

    std::cout << "Please enter one of the following choices:" << std::endl;
    std::cout << "c) carnivore\tp)pianist" << std::endl;
    std::cout << "t) tree\tg)game" << std::endl;

    while(ch != 'q')
    {
        std::cout << "Please enter c, p, t, g, q(quit): ";
        std::cin >> ch;
        switch(ch)
        {
            case 'c':
                std::cout << "You choose carnivore" << std::endl;
                break;
            case 'p':
                std::cout << "You choose pianist" << std::endl;
                break;
            case 't':
                std::cout << "You choose tree" << std::endl;
                break;
            case 'g':
                std::cout << "You choose game" << std::endl;
                break;
            default:
                break;
        }

    }

    return 0;
}