#include <iostream>
#include <curses.h>
#include <string>
#include <string.h>
using namespace std;

class Information
{
string name;
string surname;
int age;
int height;
public:
void input();
void output();
};

void Information::input()
{
cout << "Задайте данные: " << endl;
cout << "Имя, Фамилия, Возраст, Рост " << endl;
cin >> name >> surname >> age >> height;
}

void Information::output()
{
cout << name << " " << surname << " " << age << " " << height << "."<< endl;
}

int main()
{
Information a1;
a1.input();
a1.output();
Information a2;
a2.input();
a2.output();
return 0;
}
