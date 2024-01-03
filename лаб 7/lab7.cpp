#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru"); // поддержка русского языка
    float s, x, a, m, i, p;
    a = 105 * pow(10, -4);
    m = 4;
    i = 7;
    // Цикл "for", который выполняется 4 раза (n принимает значения от 0 до 3)
    for (int n = 0; n < 4; n++) // Исправил условие итерации
    {
        cout << "введите x " << endl;
        cin >> x;
        s = exp(-a * x) - log(i / x * m) / (log(m) * log(m)); 
        if (s > 2 * x)
        {
            p = pow(-i * s, 2);
        }
        else (s <= 2 * x);
        {
            p = sin(-6 * s);
        }

        cout << "s равно " << s << endl;
        cout << "p равно " << p << endl;
        cout << x;
    }

    return 0;
}
