#include<iostream>
#include<clocale>
#include<stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int arr[100][100]{}, n, k = 1;
	cout << "Введите размер массвиа N: ";
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if ((i + j) % 2)
				arr[i - 1][j - 1] = 0;
			else
			{
				arr[i - 1][j - 1] = k;
				k++;
				if (k == 9) k = 1;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << ' ';
		cout << endl;
	}

	//for (int i = 0; i < n; i++)		//вывод чисел выше диагонали
	//	for (int j = 0; j < n; j++)
	//		arr[i][j] = rand() % 9+1;
	//int i = n / 2 - 1, j = n / 2;
	//while (i != -1)
	//{
	//	arr[i][j] = 0;
	//	--i;
	//	for (int k = 1; k < j-i; ++k)
	//	{
	//		arr[i][j + k] = 0;
	//		arr[i][j - k] = 0;
	//	}
	//}
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < n; j++)
	//		cout << arr[i][j] << ' ';
	//	cout << endl;
	//}
		
}