#include <iostream>

using namespace std;

int Fibonachi(int i)
{
    if (i < 1) return 0;
    if (i == 1) return 1;
    return Fibonachi(i - 1) + Fibonachi(i - 2); 
}

int main()
{
    int n;
    cout << "Задайте количество чисел ряда Фибоначчи: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << Fibonachi(i) << endl;
    }
}