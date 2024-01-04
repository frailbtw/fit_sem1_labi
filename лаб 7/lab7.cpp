#include <iostream>

int variant(int in)
{
    using namespace std;
    int zaglav = 0, strochn = 0, raznost = 0;
    char zaglavnaya, strochnaya;
    switch (in)
    {
    case 1: {
        cout << "введите заглавные и строчные буквы латинского алфавита ";
        cin >> zaglavnaya >> strochnaya;
        zaglav = char(zaglavnaya);
        strochn = char(strochnaya);
        raznost = strochn - zaglav;
        cout << "Raznost = " << raznost;
        break;
    }
    case 2: {
        cout << "введите заглавые и строчные буквы русского алфавита ";
        cin >> zaglavnaya >> strochnaya;
        zaglav = char(zaglavnaya);
        strochn = char(strochnaya);
        raznost = strochn - zaglav;
        cout << "Raznost = " << raznost;
        break;
    }
    case 3: {
        cout << "введите число  ";
        cin >> zaglavnaya;
        zaglav = char(zaglavnaya);
        cout << "zaglav = " << zaglav;
        break;
    }
    case 4: {
        break;
    }
    default: {
        cout << " введите корректный вариант ! ";
        break;
    }
    }
    return 0;
}

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int x = 0, zaglav = 0, strochn = 0, raznost = 0;
    cout <<"1-заглавную и строчную латинского" << endl << "2-заглавную и строчную русского" << endl << "3-число" << endl << "вариант = ";
    cin >> x;
    variant(x);
}