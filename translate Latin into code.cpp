#include "choice_1.h"
#include <iostream>
#include <windows.h>

using namespace std;
void choice_1() {
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int kod;
	char bukva[20];
	cout << "������� ���������� ������: ";
	cin >> bukva;
	kod = (int)(bukva[0]);
	printf("��� ������� �������: %d", kod);
	printf("\n");
	cout << "������� ���������� ������: ";
	cin >> bukva;
	kod = (int)(bukva[0]);
	printf("��� ������� �������: %d", kod);
	printf("\n");
}