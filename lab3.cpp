#include <iostream>
using namespace std;

//Windows-1251
// 44 65 6E 69 73 65 6E 6B 44 6D 69 74 72 69 79 32 30 30 34
// 414 435 43D 438 441 435 43D 43A 43E 414 43C 438 442 440 438 439 32 30 30 34
// 414 435 43D 438 441 435 43D 43A 43E 32 30 34 44 6D 69 74 72 69 79
//UTF-8
// 44 65 6E 69 73 65 6E 6B 44 6D 69 74 72 69 79 32 30 30 34
// 414 435 43D 438 441 435 43D 43A 43E 414 43C 438 442 440 438 439 32 30 30 34
// 414 435 43D 438 441 435 43D 43A 43E 32 30 34 44 6D 69 74 72 69 79
//UTF-16
// 44 65 6E 69 73 65 6E 6B 44 6D 69 74 72 69 79 32 30 30 34
// 414 435 43D 438 441 435 43D 43A 43E 414 43C 438 442 440 438 439 32 30 30 34
// 414 435 43D 438 441 435 43D 43A 43E 32 30 34 44 6D 69 74 72 69 79

int main()
{
	setlocale(LC_ALL, "Russian");
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "DenisenkoDmitriy2004";
	char rfie[] = "ÄåíèñåíêîÄìèòðèé2004";
	char lr[] = "Äåíèñåíêî2004Dmitriy";

	wchar_t Lfie[] = L"DenisenkoDmitriy2004";
	wchar_t Rfie[] = L"ÄåíèñåíêîÄìèòðèé2004";
	wchar_t LR[] = L"Äåíèñåíêî2004Dmitriy";

	cout << hello << lfie << endl;
	return 0;
}