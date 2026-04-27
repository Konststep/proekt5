#include <iostream>
#include <clocale>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a[3][6]{};

    int i, j, min, max, min_i=0, min_j=0, max_i=0, max_j=0;

    cout << "Массив: " << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            a[i][j] = rand() & 100;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
        min = a[0][0];
        max = a[0][0];

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 6; j++)
            {
                if (min > a[i][j])
                {
                    min = a[i][j];
                    min_i = i + 1;
                    min_j = j + 1;
                }
               
                if (max < a[i][j])
                {
                    max = a[i][j];
                    max_i = i + 1;
                    max_j = j + 1;
                }
                
            }
        }
    
        cout << endl;
        cout << "Индекс минимального элемента: [" << min_i << "] [" << min_j << "]" << endl;
        cout << "Индекс максимальный элемента: [" << max_i << "] [" << max_j << "]" << endl;
        return EXIT_SUCCESS;
    }