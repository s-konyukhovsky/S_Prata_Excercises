#include <iostream>
#include <cstring>

struct stringy{
    char *str;
    int ct;
};

void set(stringy &str, const char *str2 = "");
void show(const stringy &str, int cnt = 1);
void show(const char *str, int cnt = 1);

int main() {
    stringy beany{};
    char testing[] = "Reality isn't what it used to be";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done");
    return 0;
}

void set(stringy &str, const char *str2){
    str.ct = static_cast<int>(strlen(str2));
    str.str = new char[str.ct + 1];
    strcpy(str.str, str2);
};

void show(const stringy &str, const int cnt){
    for(int i = 0; i < cnt; i++)
        std::cout << "String: " << str.str << std::endl;
};

void show(const char *str, const int cnt){
    for(int i = 0; i < cnt; i++)
        std::cout << "String: " << str << std::endl;
};