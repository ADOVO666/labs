#include <iostream>
#include <Windows.h>
#include <vector>


// МЕЛЬНИЧЕНКО НИКИТА АЛЕКСАНДРОВИЧ РИ-221055
using namespace std;
//Изменение для гита
int main()
{
    //ОБЪЯВЛЕНИЕ ПЕРЕМЕННЫХ И МАССИВОВ
    setlocale(LC_ALL, "RU");
    int i, j, arr11[10], arr12[10], arr13[5], arr14[10], arr21[5][5];
    cout << "Одномерный массив для пункта 1\n" << "[";

    //ЗАДАНИЕ 1.1
    for (i = 0; i < 10; i++)
    {
        cout << arr11[i] << " ";
    }
    cout << "]\n";

    //ЗАДАНИЕ 1.2
    srand(time(0));
    cout << "Одномерный массив для пункта 2\n" << "[";
    for (i = 0; i < 10; i++)
    {
        arr12[i] = rand() % 21 - 10;
        cout << arr12[i] << " ";
    }
    cout << "]\n";

    //ЗАДАНИЕ 1.3
    int PersonNumber;
    cout << "Введите пять чисел для массива из 3-го пункта\n";
    for (i = 0; i < 5; i++)
    {
        cin >> PersonNumber;
        arr13[i] = PersonNumber;

    }
    cout << "Одномерный массив для пункта 3\n" << "[";
    for (i = 0; i < 5; i++)
    {
        cout << arr13[i] << " ";
    }
    cout << "]\n";

    //ЗАДАНИЕ 1.4
    for (i = 0; i < 10; i++)
    {
        if (arr12[i] % 2 == 0)
        {
            arr14[i] = arr12[i] * 3;
        }
        else
            arr14[i] = arr12[i] * 5;

    }

    cout << "Одномерный массив для пункта 4\n" << "[";
    for (i = 0; i < 10; i++)
    {
        cout << arr14[i] << " ";
    }
    cout << "]\n";


    //ЗАДАНИЕ 2.1
    cout << "Двумерный массив для пункта 1\n";
    srand(time(0));
    for (i = 0; i < 5; i++) {
        cout << "[";
        for (j = 0; j < 5; j++) {
            arr21[i][j] = rand() % 21 - 10;
            cout << arr21[i][j] << " ";
        }
        cout << "]" << endl;
    }
    cout << endl;

    //ЗАДАНИЕ 2.2
    int sum = 0;
    for (i = 0; i < 5; i++) {
        sum = 0;
        for (j = 0; j < 5; j++) {
            sum += arr21[i][j];

        }

        cout << "Сумма " << i << "-й строки: " << sum << endl;
    }



    //ЗАДАНИЕ 2.3

    for (i = 0; i < 5; i++) {
        cout << "[";
        for (j = 0; j < 5; j++) {
            if (arr21[i][j] < 0) {
                arr21[i][j] = 0;
            }
            cout << arr21[i][j] << " ";
        }
        cout << "]" << endl;
    }








    return 0;
}