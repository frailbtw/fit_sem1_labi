#include <iostream>
#include "NumberCase.h"

using namespace std;

void NumberCase() {
    char zaglavnaya;
    int zaglav;

    cout << "¬ведите число ";
    cin >> zaglavnaya;

    zaglav = static_cast<int>(zaglavnaya);

    cout << "zaglav = " << zaglav << endl;
}