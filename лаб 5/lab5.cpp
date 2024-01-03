#include <iostream>
void main()
#include <iostream>
#include <cmath>
; void main()
{
    setlocale(LC_CTYPE, "Russian");
    double a, b, c;
    double average;

    // Ввод значений a, b и c
    std::cout << "Введите значение a: ";
    std::cin >> a;
    std::cout << "Введите значение b: ";
    std::cin >> b;
    std::cout << "Введите значение c: ";
    std::cin >> c;

    // Проверка на неравенство нулю
    if (a != 0 && b != 0 && c != 0) {
        // Вычисление среднего геометрического
        average = std::cbrt(a * b * c);
        std::cout << "Среднее геометрическое: " << average << std::endl;
    }
    else {
        printf("Одно из чисел равно нулю");
    }
}
