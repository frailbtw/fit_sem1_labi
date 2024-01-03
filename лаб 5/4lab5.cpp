#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int x, y, z, max, t;
	std::cout << "Введите x ";
		std::cin >> x; /// ввод переменных
		std::cout << "Введите y ";
		std::cin >> y;
		std::cout << "Введите z ";
		std::cin >> z;
	max = x; /// начальное значение max
	if (y>max)
		max = y; /// проверка больше ли "y" чем "max"
	if (z>max)
		max = z; /// проверка больше ли "z" чем "max"
	std::cout << "Максимальное число = " << max;
	t = 2 * max;
	std::cout << "; t = 2 * max =  " << t; /// вывод результата

}
