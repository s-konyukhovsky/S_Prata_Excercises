#include <iostream>
#include <fstream>

int main() {
    unsigned long ch_num = 0;
    std::ifstream fin;
    fin.open("..\\test.txt");
    if(fin.is_open())
    {
        while(fin.get() && !fin.eof())
            ch_num++;
        fin.close();
        std::cout << "Number of chars: " << ch_num << std::endl;
    }else{
        std::cout << "Can't open file!";
    }

    return 0;
}