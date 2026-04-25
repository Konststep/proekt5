#include <iostream>
#include <clocale>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a[10];
    int i, min, max;

    cout << "Рандомные 10 чисел: " << endl;
    for (i = 0; i < 10; i++)
    {
        a[i] = rand() & 100;
        cout << a[i] << " ";
    }

    min = a[0];
    max = a[0];

    for (i = 0; i < 10; i++)
    {
        if (min > a[i]) 
        {
            min = a[i];
        }
        if (max < a[i])
        {
            max = a[i];
        }

    }
    cout << endl;
    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;
    return EXIT_SUCCESS;
}