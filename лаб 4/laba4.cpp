#include <iomanip> 
#include <iostream>// библиотеки
void main()
{
	setlocale(LC_CTYPE, "Russian");// поддержка русских символов в консоли
	using namespace std;// сообщает что мы используем все обьекты
	char c = 0, probel; probel = ' ';// значение переменны
	cout << "Введите символ "; cin >> c;// команда для ввода нужного знака
	cout << setw(39) << setfill(probel) << probel;// колличество пробелов
	cout << setw(1) << setfill(c) << c << endl;// колличество знаков
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(17) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(19) << setfill(c) << c << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
}