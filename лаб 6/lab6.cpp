#include <iostream> 
#include <iomanip>  
using namespace std;


void main()
{
    setlocale(LC_ALL, "ru"); // поддержка русского языка
    float z, q, y, a, j, k, l;
    k = 0;
    l = 0;
    cout << "ЦИКЛ for" << endl;
    // Цикл "for", который выполняется 4 раза (n принимает значения от 0 до 3)
    for (int n = 0; n < 4; n++)
    {
        // Расчет переменных z и q на основе введенного значения j и других переменных
        a = 6;
        y = -1.55;
        cout << "print J: ";
        cin >> j;
        z = sqrt(a + 1) - tan(j + y);
        q = exp(-j * 0.1 * y) + pow(3 * z, 2);
        // Вывод значений переменных z и q
        cout << "z = " << z << endl;
        cout << "q = " << q << endl;
    }
    cout << "ЦИКЛ while" << endl;

    j = -1;
    while (j < 1.1)
    {
        a = 6;
        y = -1.55;

        k++; // Увеличиваем k на 1
        z = sqrt(a + 1) - tan(j + y);
        q = exp(-j * 0.1 * y) + pow(3 * z, 2);
        // Выводим значения z и q, а также значение j
        cout << "z = " << z << endl;
        cout << "q = " << q << endl << endl;
        cout << j << endl;
        j = j + 0.2;// Увеличиваем j на 0.2
    }
    cout << "ЦИКЛ do while" << endl;// Выводим сообщение


    a = 1;
    y = -1.55;
    while (a <= 2)
    {
        int q1 = 0;

        while (q1 < 3)
        {


            cout << "print j : ";
            cin >> j;// Запрашиваем у пользователя значение j
            z = sqrt(a + 1) - tan(j + y);
            q = exp(-j * 0.1 * y) + pow(3 * z, 2);
            cout << "z = " << z << endl;
            cout << "q = " << q << endl;
            q1++;// Увеличиваем q1 на 1
        }
        a = a + 0.2;// Увеличиваем a на 0.2
    }
}