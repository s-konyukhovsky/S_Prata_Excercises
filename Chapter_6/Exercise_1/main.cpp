#include <iostream>
#include <cctype>
int main() {
    char ch;
    do{
        std::cin.get(ch);
        if(!isdigit(ch))
        {
            if(islower(ch))
                ch = static_cast<char>(toupper(ch));
            else
                ch = static_cast<char>(tolower(ch));
            std::cout << ch;
        }
    }while(ch != '@');
    return 0;
}