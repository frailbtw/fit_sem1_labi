#include <iostream>

using namespace std;

int main2()
{
	
	setlocale(LC_ALL, "ru"); // Устанавливаем локаль для вывода на русском языке
	cout << "Задание 2 " << endl;
	int** massiv; // Объявление двумерного массива

	cout << "Введите размер матрицы: ";
	int n; cin >> n; // Ввод размера матрицы

	massiv = new int* [n]; // Выделение памяти под строки матрицы

	int i, j;

	for (int i = 0; i < n; i++)
	{
		massiv[i] = new int[n]; // Выделение памяти под столбцы матрицы
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << "Введите элемент массива: ";
			cin >> massiv[i][j]; // Ввод элементов матрицы
		}
	}

	cout << endl << "Матрица: " << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << massiv[i][j] << " "; // Вывод элементов матрицы
		}

		cout << endl;
	}

	int I, J;
	string c = " ";
	// Проходим по матрице для поиска положительного элемента
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (massiv[i][j] > 0)
			{
				c = "В матрице имеется положительный элемент!!!";
				I = i;

			}
		}

	}

	cout << c << endl;

	cout << endl << "Новая матрица: " << endl;
	// Проходим по матрице для вывода новой матрицы
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{ // Если строка меньше или равна I и элемент отрицателен, выводим модуль
			if (i <= I and massiv[i][j] < 0)
			{
				cout << -massiv[i][j] << " ";
			}
			else
			{
				cout << massiv[i][j] << " ";
			}
		}

		cout << endl;

	}
	// Освобождение памяти
	for (int k = 0; k < n; k++)
		delete[] massiv[k];
	delete[] massiv;


	return 0;
}