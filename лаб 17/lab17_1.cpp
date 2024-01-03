#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    const int n = 10; // Размер массива
    int arr[n] = { 1, 2, 0, 4, 5, 0, 7, 8, 9, 10 }; // Исходный массив
    int sum = 0; // Переменная для хранения суммы
    bool foundFirstZero = false; // Флаг для обнаружения первого нулевого элемента

    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            if (!foundFirstZero) {
                foundFirstZero = true;
            }
            else {
                break; // Обнаружен второй нулевой элемент, завершаем цикл
            }
        }
        else if (foundFirstZero) {
            sum += arr[i]; // Накапливаем сумму элементов между нулями
        }
    }

    cout << "Сумма элементов между первым и последним нулевыми элементами: " << sum << endl;

    return 0;
}
