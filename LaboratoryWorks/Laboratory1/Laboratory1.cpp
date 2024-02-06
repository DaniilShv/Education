#include <iostream>
#include<clocale>
#include<stdlib.h>
using namespace std;

int main()
{
    int arr[100], n;
    cout << "Введите размер массива (N >= 2): ";
    do {							
    	cin >> n;
    } while (n < 2 || n > 100);		//проверка на выполнение условия размерности
    
    for (int i = 0; i < n; ++i)
    {
    	arr[i] = rand() % 20; //заполнение массива
    	cout << arr[i] << ' ';
    }
    cout << endl;
    
    int m = arr[0]; //запоминает максимальный элемент
    int k = 1;  //счетчик количества максимальныъ элементов
    int index = 0; //хранит индекс максимального элемента
    for (int i = 1; i < n; ++i)
    {
    	if (m <= arr[i])
    	{
    		if (m == arr[i]) k += 1;
    		else
    		{
    			m = arr[i];
    			k = 1;
    			index = i;
    		}
    	}
    }
    cout << "Максимальный элемент: " << m << endl;
    cout << "Количество максимальных элементов: " << k << endl;
    cout << "Индекс максимального элемента: " << index << endl;
    cout << "Сумма максимальных элементов = " << m * k << endl;
    return 0;
}
