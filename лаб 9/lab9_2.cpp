#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return pow(x, 3) + 2 * x - 1;
}

double findRoot(double a, double b, double y) {
    double c;

    while ((b - a) >= y) {
        c = (a + b) / 2;
        // Проверяем, находится ли корень между a и c
        if (f(c) == 0.0) {
            break;
        }
        // Если корень находится между a и c, обновляем b
        else if (f(c) * f(a) < 0) {
            b = c;
        }
        // Иначе корень находится между c и b, обновляем a
        else {
            a = c;
        }
    }

    return c;
}

int main() {
    setlocale(LC_ALL, "ru");
    double a = 0.0;
    double b = 1.0;
    double y = 0.0001;

    double z = findRoot(a, b, y);

    cout << "Корень уравнения: " << z << endl;

    return 0;
}