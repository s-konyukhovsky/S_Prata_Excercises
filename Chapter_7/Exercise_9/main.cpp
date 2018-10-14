#include <iostream>
#include <cstring>
#include <limits>

const int SLEN = 30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main() {
    int class_size = 0;
    int entered = 0;
    student *ptr_stu = nullptr;

    std::cout << "Enter class size: ";
    std::cin >> class_size;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    ptr_stu = new student[class_size];
    entered = getinfo(ptr_stu, class_size);
    for(int i = 0; i < entered; i ++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete []ptr_stu;
    std::cout << "Done" << std::endl;
    return 0;
}

int getinfo(student pa[], int n)
{
    int i = 0;
    for(; i < n; i++)
    {
        std::cout << "Student #" << i + 1 << std::endl;
        std::cout << "Fullname: ";
        std::cin.getline(pa[i].fullname, SLEN);
        if(strlen(pa[i].fullname) == 0)
            break;
        std::cout << "Hobby: ";
        std::cin.getline(pa[i].hobby, SLEN);
        std::cout << "Ooplevel: ";
        std::cin >> pa[i].ooplevel;
        std::cin.get();
    }
    return i;
}

void display1(student st)
{
    std::cout << "Fullname: " << st.fullname << std::endl;
    std::cout << "Hobby: " << st.hobby << std::endl;
    std::cout << "Ooplevel: " << st.ooplevel << std::endl;
}

void display2(const student *ps)
{
    std::cout << "Fullname: " << ps->fullname << std::endl;
    std::cout << "Hobby: " << ps->hobby << std::endl;
    std::cout << "Ooplevel: " << ps->ooplevel << std::endl;
}

void display3(const student pa[], int n)
{
    for(int i = 0; i < n; i++)
        display2(&pa[i]);

}