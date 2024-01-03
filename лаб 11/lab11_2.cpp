#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");

    // Переменные
    unsigned int A;
    unsigned int mask = 1 << 16;

    // Ввод целого числа 
    cout << "Введите целое число: ";
    cin >> A;

    // Сохранение исходных значений переменных
    int A1 = A;
    int mask1 = mask;

    // Ввод параметров замены битов
    cout << "Введите сколько битов заменить? ";
    int n;
    cin >> n;
    string zamena;
    string prewzamena = "";
    cout << "Введите от какой позиции заменять? ";
    int p;
    cin >> p;

    // Вывод двоичного представления исходного числа
    cout << "Двоичный вид: ";
    for (int i = 1; i <= 16; i++)
    {
        putchar(mask & A ? '1' : '0');
        A <<= 1;
    }

    cout << endl << "Новый двоичный вид: ";
    for (int i = 1; i <= 16; i++)
    {
        // Если позиция находится в интервале [p, p + n - 1], инвертировать бит
        if (p <= i and i <= p + n - 1)
        {
            zamena = putchar(mask1 & A1 ? '0' : '1');
            zamena = zamena + prewzamena;
            prewzamena = zamena;
        }
        else
        {
            // В противном случае сохранить бит без изменений
            putchar(mask1 & A1 ? '1' : '0');
        }
        A1 <<= 1;
    }

    cout << endl;

    // Переменные второго числа
    unsigned int B;
    unsigned int mask2 = 1 << 16;

    // Ввод второго целого числа 
    cout << "Введите целое число: ";
    cin >> B;

    // Сохранение исходных значений переменных
    int B1 = B;
    int mask3 = mask2;

    // Ввод параметров замены битов для второго числа
    cout << "Введите сколько битов заменить? ";
    int m;
    cin >> m;
    cout << "Введите от какой позиции заменять? ";
    int q;
    cin >> q;

    // Вывод двоичного представления второго числа
    cout << "Двоичный вид: ";
    for (int i = 1; i <= 16; i++)
    {
        putchar(mask2 & B ? '1' : '0');
        B <<= 1;
    }

    cout << endl << "Новый двоичный вид: ";
    for (int i = 1; i <= 16; i++)
    {
        // Если позиция находится в интервале [q, q + m - 1], заменить бит
        if (q <= i and i <= q + m - 1)
        {
            cout << zamena[m];
        }
        else
        {
            // В противном случае сохранить бит без изменений
            putchar(mask3 & B1 ? '1' : '0');
        }
        B1 <<= 1;
    }

    return 0;
}
