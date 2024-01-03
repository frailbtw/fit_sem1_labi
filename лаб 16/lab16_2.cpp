#include <iostream>
#include <string>

using namespace std;

// Функция для подсчета числа вхождений символа в строке
int countOccurrences(const string& str, char symbol) {
    int count = 0;

    // Цикл по символам строки
    for (char ch : str) {
        // Проверка на совпадение с искомым символом
        if (ch == symbol) {
            // Увеличение счетчика
            count++;
        }
    }

    return count;
}

int main() {
    setlocale(LC_ALL, "ru");
    // Ввод текста
    cout << "Введите несколько строк текста: " << endl;
    string input;
    getline(cin, input);

    // Ввод символа для поиска
    cout << "Введите символ для поиска: ";
    char searchSymbol;
    cin >> searchSymbol;

    // Вызов функции для подсчета числа вхождений символа
    int result = countOccurrences(input, searchSymbol);

    // Вывод результата
    cout << "Число вхождений символа '" << searchSymbol << "' в тексте: " << result << endl;

    return 0;
}
