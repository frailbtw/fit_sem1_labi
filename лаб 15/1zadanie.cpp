#include <iostream>

using namespace std;

int main1()
{
	
	setlocale(LC_ALL, "ru");
	cout << "Задание 1 " << endl;

	const int N = 100; // Максимальный размер массива
	int massiv[N]; // Объявление массива

	cout << "Введите длину массива: ";
	int n; cin >> n; // Ввод длины массива

	int* ptr;
	if (!(ptr = (int*)malloc(n * sizeof(int)))) // Выделение памяти для динамического массива
	{
		puts("Не хватает памяти"); // Вывод сообщения об ошибке и завершение программы
		return 0;
	}

	int i;
	for (i = 0; i < n; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> massiv[i]; // Заполнение массива значениями, введенными пользователем
	}

	int max = 0;
	for (i = 0; i < n; i++)
	{
		if (massiv[i] > max)
		{
			max = massiv[i]; // Нахождение максимального элемента массива
		}
	}

	cout << "max = " << max << endl;

	int kolvo = 0;
	for (i = 0; i < n; i++)
	{
		if (massiv[i] == max)
		{
			kolvo++; // Подсчет количества повторений максимального элемента
		}
	}

	cout << "Максимальный элемент массива повторяется " << kolvo << " раз" << endl;

	free(ptr); // Освобождение памяти

	return 0;
}