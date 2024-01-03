#include <iostream>
using namespace std;

// Функция для выполнения первого задания
int main1()
{
    setlocale(LC_CTYPE, "Russian");

    // Константа для размера массивов
    const int N = 10;

    // Объявление массивов A и B
    int A[N], B[N];

    // Ввод размера массивов
    cout << "Введите размер Массивов A и B: ";
    int size;
    cin >> size;

    // Ввод числа t и определение указателя min на это число
    cout << "Введите число t: ";
    int t, * min;
    cin >> t;
    min = &t;

    // Вывод области памяти числа t
    cout << "Область памяти числа t = " << min << endl;

    // Заполнение массива A
    for (int i = 0; i < size; i++)
    {
        cout << "Введите " << i << " номер массива A = ";
        cin >> A[i];
    }

    cout << '\n';

    // Заполнение массива B
    for (int k = 0; k < size; k++)
    {
        cout << "Введите " << k << " номер массива B = ";
        cin >> B[k];
    }

    // Подсчет количества элементов меньших числа t в массивах A и B
    int minA = 0, minB = 0;
    for (int l = 0; l < size; l++)
    {
        if (A[l] < *min)
        {
            minA++;
        }
        if (B[l] < *min)
        {
            minB++;
        }
    }

    cout << '\n';

    // Вывод массива с большим количеством элементов меньших числа t
    if (minA > minB)
    {
        for (int i = 0; i < size; i++)
        {
            cout << A[i] << endl;
        }
    }
    else
    {
        for (int k = 0; k < size; k++)
        {
            cout << B[k] << endl;
        }
    }

    return 0;
}

// Функция для выполнения второго задания
int main2()
{
    setlocale(LC_CTYPE, "Russian");

    // Константа для размера массивов
    const int N = 50;

    // Объявление массивов C и B
    int C[N], B[N];

    // Ввод размера массивов
    cout << '\n' << "2 Задание" << endl;
    cout << "Введите размер Массивов C и B: ";
    int size;
    cin >> size;

    // Заполнение массива C
    for (int i = 0; i < size; i++)
    {
        cout << "Введите " << i << " номер массива C = ";
        cin >> C[i];
    }

    cout << '\n';

    // Заполнение массива B
    for (int l = 0; l < size; l++)
    {
        cout << "Введите " << l << " номер массива B = ";
        cin >> B[l];
    }

    // Подсчет количества элементов, где C[k] > B[k], C[k] < B[k] и C[k] == B[k]
    int k1, k2, k3;
    k1 = k2 = k3 = 0;

    for (int k = 0; k < size; k++)
    {
        if (C[k] > B[k])
        {
            k1++;
        }
        if (C[k] < B[k])
        {
            k2++;
        }
        if (C[k] == B[k])
        {
            k3++;
        }
    }

    // Определение указателей на переменные k1, k2, k3
    int* Mk1, * Mk2, * Mk3;
    Mk1 = &k1;
    Mk2 = &k2;
    Mk3 = &k3;

    // Вывод адресов областей памяти чисел k1, k2, k3
    cout << "Область памяти числа k1 = " << Mk1 << endl;
    cout << "Область памяти числа k2 = " << Mk2 << endl;
    cout << "Область памяти числа k3 = " << Mk3 << endl;

    // Вывод значений переменных k1, k2, k3
    cout << "Чисел для выражения C[k] > B[k] " << *Mk1 << endl;
    cout << "Чисел для выражения C[k] < B[k] " << *Mk2 << endl;
    cout << "Чисел для выражения C[k] == B[k] " << *Mk3 << endl;

    return 0;
}

// Функция main, вызывающая main1 и main2
int main()
{
    main1();
    main2();
    return 0;
}
