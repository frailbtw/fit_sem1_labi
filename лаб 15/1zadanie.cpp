#include <iostream>

using namespace std;

int main1()
{
	
	setlocale(LC_ALL, "ru");
	cout << "������� 1 " << endl;

	const int N = 100; // ������������ ������ �������
	int massiv[N]; // ���������� �������

	cout << "������� ����� �������: ";
	int n; cin >> n; // ���� ����� �������

	int* ptr;
	if (!(ptr = (int*)malloc(n * sizeof(int)))) // ��������� ������ ��� ������������� �������
	{
		puts("�� ������� ������"); // ����� ��������� �� ������ � ���������� ���������
		return 0;
	}

	int i;
	for (i = 0; i < n; i++)
	{
		cout << "������� ������� �������: ";
		cin >> massiv[i]; // ���������� ������� ����������, ���������� �������������
	}

	int max = 0;
	for (i = 0; i < n; i++)
	{
		if (massiv[i] > max)
		{
			max = massiv[i]; // ���������� ������������� �������� �������
		}
	}

	cout << "max = " << max << endl;

	int kolvo = 0;
	for (i = 0; i < n; i++)
	{
		if (massiv[i] == max)
		{
			kolvo++; // ������� ���������� ���������� ������������� ��������
		}
	}

	cout << "������������ ������� ������� ����������� " << kolvo << " ���" << endl;

	free(ptr); // ������������ ������

	return 0;
}