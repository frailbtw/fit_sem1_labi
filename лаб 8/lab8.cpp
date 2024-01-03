#include <iostream>
#include <vector>
#include <cmath>

int main() {
    setlocale(LC_ALL, "ru");
    std::vector<double> Array(5); // Создание вектора для хранения 5 нецелых чисел
    double sum = 0, sigmasum = 0, sum1, sum2,summa; // Переменная для хранения суммы чисел

    std::cout << "Введите массив:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Число " << i + 1 << ": ";
        std::cin >> Array[i]; // Запись чисел в вектор
        sum += Array[i]; // Прибавление числа к сумме
    }

    std::cout << "Сумма введенных нецелых чисел: " << sum << std::endl;

    int m = 5; // Задаем значение переменной m
    sigmasum = 0.0; // Обнуляем сумму

    // Вычисление суммы от 1 до m
    for (int i = 1; i <= m; ++i) {
        sigmasum += i;
    }
    sum1 = sigmasum * pow(Array[0] + 2, 2);
    sum2 = 8 * Array[2];
    summa = sum1 + sum2;
    std::cout <<"Ответ: "<< summa;
    

    return 0;
}