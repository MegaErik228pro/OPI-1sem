#include <iostream>
#include "choice_1.h"
#include "choice_2.h"
#include "choice_3.h"


using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int a;
	cout << "1 Ц значени€ кодов в Windows - 1251 буквы латинского алфавита в прописном и строчном написании;\n";
	cout << "2 Ц значени€ кодов в Windows - 1251 буквы русского алфавита в прописном и строчном написании;\n";
	cout << "3 Ц вывод в консоль кода символа, соответствующего введенной цифре;\n";
	cout << "4 Ц выход из программы.\n";
	cout << "¬ыбор: ";
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
		cout << "Ћадно.\n";
		break;
	default:
		cout << "Ќеправильно введЄна€ цифра\n";
		break;
	}
	return 0;
}