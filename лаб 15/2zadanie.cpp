#include <iostream>

using namespace std;

int main2()
{
	
	setlocale(LC_ALL, "ru"); // ������������� ������ ��� ������ �� ������� �����
	cout << "������� 2 " << endl;
	int** massiv; // ���������� ���������� �������

	cout << "������� ������ �������: ";
	int n; cin >> n; // ���� ������� �������

	massiv = new int* [n]; // ��������� ������ ��� ������ �������

	int i, j;

	for (int i = 0; i < n; i++)
	{
		massiv[i] = new int[n]; // ��������� ������ ��� ������� �������
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << "������� ������� �������: ";
			cin >> massiv[i][j]; // ���� ��������� �������
		}
	}

	cout << endl << "�������: " << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << massiv[i][j] << " "; // ����� ��������� �������
		}

		cout << endl;
	}

	int I, J;
	string c = " ";
	// �������� �� ������� ��� ������ �������������� ��������
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (massiv[i][j] > 0)
			{
				c = "� ������� ������� ������������� �������!!!";
				I = i;

			}
		}

	}

	cout << c << endl;

	cout << endl << "����� �������: " << endl;
	// �������� �� ������� ��� ������ ����� �������
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{ // ���� ������ ������ ��� ����� I � ������� �����������, ������� ������
			if (i <= I and massiv[i][j] < 0)
			{
				cout << -massiv[i][j] << " ";
			}
			else
			{
				cout << massiv[i][j] << " ";
			}
		}

		cout << endl;

	}
	// ������������ ������
	for (int k = 0; k < n; k++)
		delete[] massiv[k];
	delete[] massiv;


	return 0;
}