#include <iostream>
#include <string>
#include <cctype>

void upperStr(std::string &str);

int main() {
    std::string word;
    do{
        word.clear();
        std::cout << "Enter str (q to quit): ";
        std::getline(std::cin, word);
        upperStr(word);
        std::cout << word << std::endl;
    }while(word != "Q");

    return 0;
}

void upperStr(std::string &str)
{
    for(auto &c : str)
        c = static_cast<char>(toupper(c));
}