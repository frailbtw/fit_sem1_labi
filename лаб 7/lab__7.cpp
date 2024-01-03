#include <iostream>
#include "LatinCase.h"
#include "RussianCase.h"
#include "NumberCase.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int x = 0;
    cout << "1-заглавную и строчную латинского" << endl << "2-заглавную и строчную русского" << endl << "3-число" << endl << "вариант = ";
    cin >> x;

    switch (x) {
    case 1:
        LatinCase();
        break;
    case 2:
        RussianCase();
        break;
    case 3:
        NumberCase();
        break;
    default:
        cout << "Введите корректный вариант!" << endl;
        break;
    }

    return 0;
}