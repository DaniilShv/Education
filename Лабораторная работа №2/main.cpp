#include<iostream>
#include<clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "Введите размер основания равнобедренного треугольника: ";
	do
	{
		cin >> n;
		if (n < 2 || n % 2 == 0)
			cout << "Введите другую величину: ";
	} while (n < 2 || n % 2==0);
	for (int i = 1; i <= (n / 2) + 1; ++i)
	{
		int space = (n / 2) - i + 1;
		int stars = 2 * i - 1;
		cout << endl;
		for (int j = 1; j <= space; ++j)
			cout << ' ';
		for (int k = 1; k <= stars; ++k)
			cout << '*';
	}
	cout << endl;
	return 0;
}