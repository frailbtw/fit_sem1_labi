#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // Ввод размера массива с клавиатуры
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    // Создание массива из случайных чисел от 0 до 99
    vector<int> array;
    for (int i = 0; i < size; ++i) {
        array.push_back(rand() % 100);
    }

    // Вывод исходного массива
    cout << "Исходный массив: ";
    for (int x : array) {
        cout << x << " ";
    }
    cout << endl;

    // Удаление элементов, индексы которых кратны 7
    for (int i = size - 1; i >= 0; --i) {
        if ((i + 1) % 7 == 0) {
            array.erase(array.begin() + i);
        }
    }

    // Добавление после каждого нечетного элемента массива элемента со значением 4
    for (int i = size - 1; i >= 0; --i) {
        if (array[i] % 2 != 0) {
            array.insert(array.begin() + i + 1, 4);
        }
    }

    // Вывод измененного массива
    cout << "Измененный массив: ";
    for (int x : array) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}