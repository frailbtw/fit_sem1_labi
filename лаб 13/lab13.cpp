#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    // Объявляем массив 
    char str[200];

    //  Ввод строки
    cout << "Введите строку: ";

    // Считываем строку
    cin >> str;

    // Объявляем символы '*'
    char zvesda = '*', zvesda1 = '*';

    // Объявляем переменные для хранения индексов символов '*'
    int zvesdaint = 0, zvesda1int = 0;

    // Проходим по каждому символу в строке
    for (int i = 0; i < strlen(str); i++)
    {
        // Если текущий символ равен символу '*', сохраняем его индекс и заменяем символ '*'
        if (str[i] == zvesda)
        {
            zvesdaint = i;
            zvesda = '`';
        }

        // Если текущий символ равен символу '*', сохраняем его индекс
        if (str[i] == zvesda1)
        {
            zvesda1int = i;
        }
    }

    // Выводим символы между первым и вторым символами '*' с заменой '*' на пробел
    for (zvesdaint; zvesdaint < zvesda1int; zvesdaint++)
    {
        // Если текущий символ '*' заменяем его на пробел, иначе выводим как есть
        if (str[zvesdaint] == '*')
        {
            cout << ' ';
        }
        else
        {
            cout << str[zvesdaint];
        }
    }

    return 0;
}