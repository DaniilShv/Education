#include <iostream>
#include<clocale>
#include<stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "ru");
    const int N = 100;
    int arr[N]{}, n; 
    cout << "Введите размер массива: ";
    do {
    	cin >> n;
    	if (n < 2 || n > 100)
    		cout << "Введите другое значение: ";
    } while (n < 2 || n > 100); //проверка границы массива
    
    for (int i = 0; i < n; ++i)
    	arr[i] = rand() % 100;
    cout << "Заданный массив: ";
    for (int i = 0; i < n; ++i)
    	cout << arr[i] << ' ';
    cout << endl;
    int k;
    cout << "Введите k: ";
    cin >> k;
    cout << "Вывод массива с k до k+1 элемента: ";
    for (int i = k - 1; i != k;)
    {
    	cout << arr[i] << ' ';
    	--i;
    	if (i == -1)
    		i = n - 1;
    	if (i == k)
    		cout << arr[i] << ' ';
    }
    cout << endl;
    
    for (int i = 0; i < n-1; ++i) //упорядочивание по убыванию
    {
    	int sort = i;
    	while (sort > -1 && arr[sort] < arr[sort + 1])
    	{
    		int temp = arr[sort];
    		arr[sort] = arr[sort + 1];
    		arr[sort + 1] = temp;
    		sort--;
    	}
    }
    cout << "Массив по убыванию: ";
    for (int i = 0; i < n; ++i)
    	cout << arr[i] << ' ';
    cout << endl;
    
    cout << "Введите k: ";
    cin >> k;
    cout << "Вывод упорядоченного массива с k до k+1 элемента: ";
    for (int i = k - 1; i != k;)
    {
    	cout << arr[i] << ' ';
    	--i;
    	if (i == -1)
    		i = n - 1;
    	if (i == k)
    		cout << arr[i] << ' ';
    }
    cout << endl;
    return 0;
}
