#include <iostream>
#include "choice_1.h"
#include "choice_2.h"
#include "choice_3.h"


using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int a;
	cout << "1 � �������� ����� � Windows - 1251 ����� ���������� �������� � ��������� � �������� ���������;\n";
	cout << "2 � �������� ����� � Windows - 1251 ����� �������� �������� � ��������� � �������� ���������;\n";
	cout << "3 � ����� � ������� ���� �������, ���������������� ��������� �����;\n";
	cout << "4 � ����� �� ���������.\n";
	cout << "�����: ";
	cin >> a;
	switch (a) {
	case 1:
		choice_1();
		break;
	case 2:
		choice_2();
		break;
	case 3:
		choice_3();
		break;
	case 4:
		cout << "�����.\n";
		break;
	default:
		cout << "����������� ������� �����\n";
		break;
	}
	return 0;
}