#include <iostream>
#include <cstring>

#define WORD_LEN 64

int main() {
    char word[WORD_LEN]{};
    unsigned int word_num = 0;

    std::cout << "Введите слова (для завершения введите слово done):" << std::endl;

    do{
        memset(word, 0, WORD_LEN);
        std::cin >> word;
        word_num++;
    }while(strcmp((const char *)word, "done") != 0);

    std::cout << "Вы ввели " << word_num - 1 << " слов!" << std::endl;
    return 0;
}