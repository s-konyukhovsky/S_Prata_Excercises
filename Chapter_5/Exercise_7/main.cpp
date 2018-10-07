#include <iostream>
#include <string>

struct car{
    std::string name;
    unsigned int year{};
};

int main() {
    unsigned int cars_num = 0;
    car *catalog = nullptr;

    std::cout << "Сколько автомобилей поместить в каталог? ";
    std::cin >> cars_num;
    std::cin.get();

    catalog = new car[cars_num];

    for(unsigned int i = 0; i < cars_num; i++)
    {
        std::cout << "Автомобиль #"<< i <<":" << std::endl;
        std::cout << "Введите проиводителя: ";
        getline(std::cin, catalog[i].name);
        std::cout << "Укажите год выпуска: ";
        std::cin >> catalog[i].year;
        std::cin.get();
    }

    std::cout << "Вот ваша коллекция:" << std::endl;
    for(unsigned int i = 0; i < cars_num; i++)
        std::cout << catalog[i].year << " " << catalog[i].name << std::endl;

    delete[] catalog;
    return 0;
}