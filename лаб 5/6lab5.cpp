#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int x; /// переменная для ответа на вопросы
	puts("привет! 1 - привет, 2 - пока ");
	cin >> x;
	switch (x)
	{
	case 1: {
		puts("как дела? 1 - хорошо, 2 - плохо ");
		cin >> x;
		switch (x) {
		case 1: puts("круто, хорошего дня!"); break; /// если 1
		case 2: puts("ну м ладно"); break; /// если 2
		}
		break;
	}
	case 2: puts("пока"); break; /// если на привет ответили пока
	default: puts("неправильный ответ"); break; /// если вводишь не тот символ
	}
	return 0;
}