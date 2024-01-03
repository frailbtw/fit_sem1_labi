#include <iostream>
#include <cmath>
double func(double x) {
    return 1 + pow(x, 3);
}

double tM(double a, double b, int n) //метод трапеции 
{
    double h = (b - a) / n;
    double result = (func(a) + func(b)) / 2.0;

    for (int i = 1; i < n; ++i) {
        double x_i = a + i * h;
        result += func(x_i);
    }

    result *= h;
    return result;
}

double pM(double a, double b, int n) //метод параболы
{
    double h = (b - a) / n;
    double result = (func(a) + func(b)) / 2.0;

    for (int i = 1; i < n; ++i) {
        double x_i = a + i * h;
        result += 2 * func(x_i);
    }

    result *= h / 2.0;
    return result;
}

int main() {
    setlocale(LC_ALL, "ru"); 
    const double a = 1.0;
    const double b = 5.0;
    const int n = 200;

    double tR = tM(a, b, n);
    double pR = pM(a, b, n);

    std::cout << "результат метода трапеции: " << tR << std::endl;
    std::cout << "результат метода параболы: " << pR << std::endl;

    return 0;
}