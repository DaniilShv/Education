#include<clocale>
#include<stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    const int N = 100; //задача про диагонали
    int arr[N][N]{};
    int n, k = 1;
    cin>>n;
    for (int j = 0; j < n; ++j)
    {
        for (int i = j; i < n; ++i)
        {
            arr[i][j] = k;
            ++k;
        }
        k = 1;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout<<arr[i][j]<<' ';
        cout<<endl;
    }
    cout<<endl;
    
    int a[N][N]{}; //вывод ромба
    int i = 0, j = n/2;
    while(i != n)
    {
        if (i <= n/2)
        {
            a[i][j+i] = 1;
            a[i][j-i] = 1;
        }
        else
        {
            a[i][j+((n%i)-1)] = 1;
            a[i][j-((n%i)-1)] = 1;
        }
        i++;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
}
