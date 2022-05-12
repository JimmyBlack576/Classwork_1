

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int a;
    cout << "Введите число: ";
    cin >> a;
    
    (a % 2) ? cout << "Нечётное " : cout << "Чётное " << endl;
}

