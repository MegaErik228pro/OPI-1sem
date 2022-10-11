#include "choice_2.h"
#include <iostream>
#include <windows.h>

using namespace std;
void choice_2() {
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int kod;
	unsigned char bukva[20];
	cout << "Введите  русский символ: ";
	cin >> bukva;
	kod = (int)(bukva[0]);
	printf("Код первого символа: %d", kod);
	printf("\n");
	cout << "Введите русский символ: ";
	cin >> bukva;
	kod = (int)(bukva[0]);
	printf("Код первого символа: %d", kod);
	printf("\n");
}