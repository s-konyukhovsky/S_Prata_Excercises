#include <iostream>
#include <string>
#include <limits>

char menu();

struct bop{
    std::string fullname;
    std::string title;
    std::string bopname;
    int preference;
};


class streamsize;

int main() {
    char ch = 0;
    const char users_num = 3;
    bop users[users_num] = { {"fullname1", "title1", "bopname1", 0},
                             {"fullname2", "title2", "bopname2", 1},
                             {"fullname3", "title3", "bopname3", 2}};

    while(ch != 'q')
    {
        ch = menu();

        for (auto &user : users) {
            switch(ch)
            {
                case 'a':
                    std::cout << user.fullname << std::endl;
                    break;
                case 'b':
                    std::cout << user.title << std::endl;
                    break;
                case 'c':
                    std::cout << user.bopname << std::endl;
                    break;
                case 'd':
                    switch (user.preference)
                    {
                        case 0:
                            std::cout << "fullname" << std::endl;
                            break;
                        case 1:
                            std::cout << "title" << std::endl;
                            break;
                        case 2:
                            std::cout << "bopname" << std::endl;
                            break;
                        default:
                            break;
                    } //switch (user.preference)
                    break;
                default:
                    break;
            } // switch(ch)
        } // for
    } // while

    return 0;
}

char menu()
{
    char ch;
    std::cout << std::endl;
    std::cout << "a. display by name\tb. display by title" << std::endl;
    std::cout << "c. display by bopname\td. display by preference" << std::endl;
    std::cout << "q. quit" << std::endl;
    std::cout << std::endl;
    std::cin.get(ch);
    if(ch != 'q')
        std::cout << "Benevolent Order of Programmers Report:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return ch;
}