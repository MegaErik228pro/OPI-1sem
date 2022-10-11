#include "choice_3.h"
#include <iostream>
#include <windows.h>

using namespace std;
void choice_3() {
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int kod;
	char zifra;

	cout << "Введите цифру ";
	cin >> zifra;
	cout << "Код: 3" << zifra;
	printf("\n");
}