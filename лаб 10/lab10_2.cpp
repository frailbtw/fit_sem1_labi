#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // Ввод размера массива с клавиатуры
    int array_size;
    cout << "Введите размер массива: ";
    cin >> array_size;

    // Создание массива из случайных чисел от -99 до 99
    vector<int> array;
    for (int i = 0; i < array_size; ++i) {
        array.push_back(rand() % 200 - 100);
    }

    // Вывод исходного массива
    cout << "Исходный массив: ";
    for (int x : array) {
        cout << x << " ";
    }
    cout << endl;

    // Сортировка массива: отрицательные элементы в начало, остальные в конец
    stable_partition(array.begin(), array.end(), [](int x) { return x < 0; });

    // Вывод измененного массива
    cout << "Измененный массив: ";
    for (int x : array) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}