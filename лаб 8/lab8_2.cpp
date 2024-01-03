#include <iostream>
#include <vector>
#include <cmath>
#include <limits> 
#include <clocale> 

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8"); // Устанавливаем русскую локаль
    std::vector<double> Array(5); // Создаем вектор для хранения 5 нецелых чисел
    double sum = 0, sigmasum = 0, sum1, sum2; // Переменная для хранения суммы чисел
    int max = std::numeric_limits<int>::min(); // Инициализируем max минимальным возможным значением

    std::cout << "Введите массив:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Число " << i + 1 << ": ";
        std::cin >> Array[i]; // Записываем числа в массив
        sum += Array[i]; // Добавляем число к сумме

        if (Array[i] > max) {
            max = Array[i]; // Обновляем максимальное значение
        }
    }

    int m = 5; // Устанавливаем значение переменной m
    sigmasum = 0.0; // Обнуляем сумму

    // Вычисление суммы от 1 до m
    for (int i = 1; i <= m; ++i) {
        sigmasum += i;
    }
    sum1 = sigmasum * (pow(Array[1], 2) + 1);
    sum2 = sum1 + max;
    std::cout << "Ответ: " << sum2 << std::endl;
    return 0; // Завершение программы
}
