#include <iostream>
void main()
#include <iostream>
#include <cmath>
; void main()
{
    setlocale(LC_CTYPE, "Russian");
    double a, b, c;
    double average;

    // ���� �������� a, b � c
    std::cout << "������� �������� a: ";
    std::cin >> a;
    std::cout << "������� �������� b: ";
    std::cin >> b;
    std::cout << "������� �������� c: ";
    std::cin >> c;

    // �������� �� ����������� ����
    if (a != 0 && b != 0 && c != 0) {
        // ���������� �������� ���������������
        average = std::cbrt(a * b * c);
        std::cout << "������� ��������������: " << average << std::endl;
    }
    else {
        printf("���� �� ����� ����� ����");
    }
}
