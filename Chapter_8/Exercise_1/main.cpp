#include <iostream>
#include <string>

void print_str(const std::string &str, int flag = 0)
{
    static int counter = 0;
    if(!flag)
    {
        std::cout << "You enter string: " << str << std::endl;
        counter++;
        return;
    }
    for(int i = 0; i < counter; i++)
        std::cout << i << " You enter string: " << str << std::endl;
}

int main() {
    for(int i = 0; i < 3; i++)
        print_str("String");
    print_str("String", 1);
    return 0;
}