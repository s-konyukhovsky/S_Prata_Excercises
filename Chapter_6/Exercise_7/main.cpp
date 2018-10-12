#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

int main() {
    const char vowels[] = "aeiou";
    const char consonants[] = "bcdfghjklmnpqrstvwxyz";
    std::string word;
    unsigned int others_num = 0, vowels_num = 0, consonants_num = 0;
    std::cout << "Enter words (q to quit):" << std::endl;
    do
    {
        std::cin >> word;
        if(isalpha(word[0]))
        {
            if(word == "q")
                break;
            if(strchr(vowels, tolower(word[0])) != nullptr)
                vowels_num++;
            else
                consonants_num++;
        } else {
            others_num++;
        }
    }while(true);

    std::cout << vowels_num << " words beginning with vowels" << std::endl;
    std::cout << consonants_num << " words beginning with consonants" << std::endl;
    std::cout << others_num << " words beginning with others" << std::endl;
    return 0;
}