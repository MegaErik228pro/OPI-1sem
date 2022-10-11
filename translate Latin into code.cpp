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
	cout << "Введите английский символ: ";
	cin >> bukva;
	kod = (int)(bukva[0]);
	printf("Код первого символа: %d", kod);
	printf("\n");
	cout << "Введите английский символ: ";
	cin >> bukva;
	kod = (int)(bukva[0]);
	printf("Код первого символа: %d", kod);
	printf("\n");
}