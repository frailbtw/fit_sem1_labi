﻿#include <iostream>

using namespace std;

int main()
{
    // Устанавливаем русскую локаль для корректного отображения символов
    setlocale(LC_CTYPE, "Russian");

    // Задаем размеры массива
    const int N = 6;
    const int M = 6;
    int massiv[N][M];

    // Вводим высоту массива
    cout << "Введите высоту массива: ";
    int n;
    cin >> n;

    // Вводим длину массива
    cout << "Введите длину массива: ";
    int m;
    cin >> m;

    // Переменная для хранения суммы элементов массива
    int sum = 0;

    // Заполняем массив элементами
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // Вводим элемент массива
            cout << "Введите элемент массива: ";
            cin >> massiv[i][j];

            // Прибавляем значение элемента к сумме
            sum += massiv[i][j];
        }
    }

    // Выводим сумму элементов массива
    cout << "Сумма элементов массива равна " << sum << endl;

    // Проверяем, является ли сумма элементов четной или нечетной
    if (sum % 2 == 0)
    {
        cout << "Сумма элементов четная";
    }
    else
    {
        cout << "Сумма элементов нечетная";
    }

    return 0;
}