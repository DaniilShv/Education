#include <iostream>
#include<clocale>
#include<stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0)); //гененатор случайных чисел
    int arr[100], n, temp;
    cout << "Введите кол-во элементов: (N >= 2): ";
    do {
    	cin >> n;
    } while (n < 2 || n > 100); //проверка границы массива
    int j = 0; 
    do {
    	cout << "Введите " << j + 1 << " элемент: ";
    	cin >> temp;
    	arr[j] = temp;
    	j += 1;
    } while (j < n); //ввод элементов пользователем
    
    cout << endl;
    j = 0; //отвечает за количество итераций
    bool flag = true; //отвечает за проверку упорядоченности
    while (flag && j < n - 1)
    {
    	if (arr[j] >= arr[j + 1])
    	{
    		flag = false;
    		cout << "Последовательность не упорядочена" << endl;
    	}
    	++j;
    }
    if (flag == true)
    	cout << "Последовательность упорядочена" << endl;
    return 0;
}
