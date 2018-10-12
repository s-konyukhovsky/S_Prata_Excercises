#include <iostream>
#include <vector>
#include <string>
#include <limits>

struct patron{
    std::string name;
    double cash{};
};

int main() {
    unsigned int patrons_num = 0;
    patron *patrons_ptr = nullptr;
    std::vector<unsigned int> grand_patrons, common_patrons;

    std::cout << "Enter patrons number: ";
    std::cin >> patrons_num;
    fin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    patrons_ptr = new patron[patrons_num];

    for(unsigned int i = 0; i < patrons_num; i++)
    {
        std::cout << "Patron #" << i + 1 << std::endl;
        std::cout << "Enter name: ";
        std::getline(std::cin, patrons_ptr[i].name);
        std::cout << "Enter cash: ";
        std::cin >> patrons_ptr[i].cash;
        fin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if(patrons_ptr[i].cash > 10000)
            grand_patrons.push_back(i);
        else
            common_patrons.push_back(i);
    }

    std::cout << std::endl;
    std::cout << "Grand Patrons" << std::endl;
    for(auto patron_num : grand_patrons)
        std::cout << "Name: " << patrons_ptr[patron_num].name << std::endl;

    std::cout << std::endl;
    std::cout << "Patrons" << std::endl;
    for(auto patron_num : common_patrons)
        std::cout << "Name: " << patrons_ptr[patron_num].name << std::endl;

    return 0;
}