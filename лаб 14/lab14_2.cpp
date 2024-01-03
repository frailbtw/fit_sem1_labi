#include <iostream>

using namespace std;

int main()
{
    // Установка локали для поддержки кириллицы
    setlocale(LC_CTYPE, "Russian");

    // Определение размеров массива
    const int N = 6;
    const int M = 6;
    int massiv[N][M];

    // Ввод высоты массива
    cout << "Введите высоту массива: ";
    int n;
    cin >> n;

    // Ввод длины массива
    cout << "Введите длину массива: ";
    int m;
    cin >> m;

    // Ввод числа k
    cout << "Введите число k: ";
    int k;
    cin >> k;

    // Проверка условия для k
    if (k > n)
    {
        cout << "Ошибка: k больше, чем высота массива." << endl;
        return 0;
    }

    // Ввод элементов массива
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Введите элемент массива: ";
            cin >> massiv[i][j];
        }
    }

    // Вывод введенного массива
    cout << endl << "Массив: " << endl;

    // Инициализация минимального элемента из строки k
    int min = massiv[k - 1][0];
    cout << "min = " << min << endl;

    if (min == massiv[k - 1][m - 1])
    {
        int f = 0;
        // Вывод переменной
        cout << "f = " << f;
    }

    else
    {
        int f = 1;
        // Вывод переменной
        cout << "f = " << f;
    }


}

