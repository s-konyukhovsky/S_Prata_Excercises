#include <iostream>
#include <string>

int main() {
    std::string word{};
    unsigned int word_num = 0;

    std::cout << "Введите слова (для завершения введите слово done):" << std::endl;

    do{
        word.clear();
        std::cin >> word;
        word_num++;
    }while(word != "done");

    std::cout << "Вы ввели " << word_num - 1 << " слов!" << std::endl;
    
    return 0;
}