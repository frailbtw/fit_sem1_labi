#include <iostream>
#include "LatinCase.h"

using namespace std;

void LatinCase() {
    char zaglavnaya, strochnaya;
    int zaglav, strochn, raznost;

    cout << "¬ведите заглавные и строчные буквы латинского алфавита ";
    cin >> zaglavnaya >> strochnaya;

    zaglav = static_cast<int>(zaglavnaya);
    strochn = static_cast<int>(strochnaya);
    raznost = strochn - zaglav;

    cout << "Raznost = " << raznost << endl;
}