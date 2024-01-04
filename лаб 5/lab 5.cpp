#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, otherRegister, rusLetter, sum;;
    char symbol;
    cout << "Введите символ" << endl;
    cin >> symbol;
    cout << "Выберите действие" << endl;
    cout << "1 – определение разницы значений кодов в Windows-1251 буквы латинского алфавита в прописном и строчном написании" << endl;
    cout << "2 – определение разницы значений кодов в Windows-1251 буквы русского алфавита в прописном и строчном написании" << endl;
    cout << "3 – вывод в консоль кода символа, соответствующего введенной цифре" << endl;
    cout << "4 - выход из программы" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
    {
        if (int(symbol) > 64 && int(symbol) < 91)
        {
            otherRegister = int(symbol) + 32;
        }
        else if (int(symbol) > 96 && int(symbol) < 123)
        {
            otherRegister = int(symbol) - 32;
        }
        else
        {
            cout << "ERROR" << endl; break;
        }
        sum = abs(int(symbol) - otherRegister);
        cout << "Код символа " << symbol << " В Windows-1251 - " << hex << int(symbol) << " а код символа " << char(otherRegister) << " - " << hex << otherRegister << " Разница между значениями " << hex << sum << endl; break;
    }
    case 2:
    {
        rusLetter = int(symbol) + 256;
        if (rusLetter > 191 && rusLetter < 224)
        {
            otherRegister = rusLetter + 32;
        }
        else if (rusLetter > 223 && rusLetter < 256)
        {
            otherRegister = rusLetter - 32;
        }
        else
        {
            cout << "ERROR" << endl; break;
        }
        sum = abs(rusLetter - otherRegister);
        cout << "Код символа " << symbol << " В Windows-1251 - " << hex << rusLetter << " а код символа " << char(otherRegister) << " - " << hex << otherRegister << " Разница между значениями " << hex << sum << endl; break;
    }
    case 3:
    {
        if (int(symbol) > 47 && int(symbol) < 58)
        {
            cout << hex << int(symbol);
        }
        else cout << "ERROR"; break;
    }
    case 4:
    {
        break;
    }
    default: break;
    }
    return 0;
}