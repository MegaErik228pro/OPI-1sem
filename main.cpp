#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	printf("������� ���������� �����: ");
	int a,c;
	string b;
	cin >> a;
	if (a==1)
	{
		cout << "�����: " << a << endl;
	}
	else
	{
		while (a>0)
			{
				b += char('0' + a % 2);
				a /= 2;		
			}
		reverse(b.begin(), b.end());
		cout << b << endl;
	}	
}