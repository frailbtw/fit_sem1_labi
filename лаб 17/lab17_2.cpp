#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols] = { {1, 2, 3},
                              {-4, 5, 6},
                              {7, -8, 9} };

    int sum = 0; // Переменная для хранения суммы положительных элементов строки

    // Поиск строки, все элементы которой положительны
    for (int i = 0; i < rows; ++i) {
        bool allPositive = true;
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] <= 0) {
                allPositive = false;
                break;
            }
        }

        if (allPositive) {
            // Находим сумму элементов строки
            for (int j = 0; j < cols; ++j) {
                sum += matrix[i][j];
            }
            break; // Завершаем цикл, так как нашли подходящую строку
        }
    }

    // Уменьшаем все элементы матрицы на найденную сумму
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] -= sum;
        }
    }

    // Вывод результата
    cout << "Сумма положительных элементов строки: " << sum << endl;
    cout << "Матрица после уменьшения элементов на сумму: " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
