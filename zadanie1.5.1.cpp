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
    int i;
    cout << "¬ведите 10 целых чисел: " << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < 10; i++)
    {
        if (i != 10-1) {
            cout << a[i] << ", ";
        }
        else
        {
            cout << a[i] << endl;
        }
    }

    return EXIT_SUCCESS;
}