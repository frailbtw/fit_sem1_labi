#include <iostream> // библиотека

int main() {
    setlocale(LC_CTYPE, "Russian");// поддержка русских символов в консоли
    // Выводим переменные
    int a = 5;
    int b = 10;
    int temp; // третья переменная

    std::cout << "Исходные значения переменных: a = " << a << ", b = " << b << std::endl;

    // Используем дополнительную переменную для обмена значениями
    temp = a;
    a = b;
    b = temp;

    std::cout << "Новые значения переменных: a = " << a << ", b = " << b << std::endl;

    return 0;
}