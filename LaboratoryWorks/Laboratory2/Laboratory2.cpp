#include <iostream>
#include<clocale>
#include<stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0));
    int arr[100]{}, n;
    
    cout << "Введите кол-во элементов: (N >= 2): ";
    do {
    	cin >> n;
    } while (n < 2 || n > 100); //проверка границы массива
    for (int i = 0; i < n; ++i) 
    {
    	arr[i] = rand() % 100;	//заполняем массив
    	cout << arr[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < n; ++i)
    {
    	if (arr[i] % 2 == 0) 
    	{
    		n += 1; //сдвигаем границу массива
    		for (int j = n; j > i; --j)
    			arr[j] = arr[j - 1]; //сдвигаем элементы вправо
    		arr[i] = -1;
    		++i; //сдвигаем итератор на следующий элемент
    	}
    }
    for (int i = 0; i < n; ++i)
    	cout << arr[i] << ' '; //вывод массива на экран
    cout << endl;
    for (int i = 0; i < n; ++i)
    {
    	if (arr[i] % 2)
    	{
    		n--; //сдвигаем границу
    		for (int j = i; j < n; ++j)
    			arr[j] = arr[j + 1]; //затираем элемент сдвигом
    		i--; //сдвигаем итерацию, для проверки сдвинутого элемента
    	}
    }
    for (int i = 0; i < n; ++i)
    	cout << arr[i] << ' ';
    return 0;
}
