#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	char str[200];
	// Ввод строки
	cout << "Введите строку: ";
	// Считывание строки с клавиатуры и сохранение в массив str
	cin >> str;
	// Итерация по каждому символу в строке
	for (int i = 0; i < strlen(str); i++)
	{
		// Проверка условия для поиска чисел и отрицательных чисел
		if (((str[i] >= '0' and str[i] <= '9') and ((str[i + 1] >= '0' and str[i + 1] <= '9'))) or ((str[i] == '-') and (str[i + 1] >= '0' and str[i + 1] <= '9')))
		{
			// Вывод текущего символа
			cout << str[i];
			// Проверка условия для вывода второй цифры в числе
			if ((str[i + 1] >= '0' and str[i + 1] <= '9') and ((str[i + 2] <= '0' or str[i + 2] >= '9')))
			{
				cout << str[i + 1];
			}
		}
	}
}
