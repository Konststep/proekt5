#include <iostream>
#include <clocale>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a[10] = { 35,24,62,1,4,6,11,8,31,9};

    int i, t;

    cout << "Массив до: " << endl;

    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;

    for (t = 0; t < 10; t++)
    {
        for (i = 9; i > 0; i--)
        {
            if (a[i] < a[i - 1])
            {
                swap(a[i], a[i - 1]);
            }

        }
        for (i = 0; i < 10; i++)
        {
            cout << a[i] << "\t";
        }
        cout << endl;
    }

    cout << "Массив после:" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    
    return EXIT_SUCCESS;
}