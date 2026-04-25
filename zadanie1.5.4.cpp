#include <iostream>
#include <clocale>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a[10] = { 54,2,62,1,75,6,11,8,73,9};

    int i, t;

    cout << "Массив до: " << endl;

    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;

    for (t = 0; t < 10-1; t++)
    {
        for (i = 1; i < 10; i++)
        {
            if (a[i] < a[i - 1])
            {
                swap(a[i], a[i - 1]);
            }

        }
    }

    cout << "Массив после:" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    
    return EXIT_SUCCESS;
}