#include<iostream>
#include<math.h>
#include<clocale>
using namespace std;

double u(double x)
{
	return cos(pow(1 - 0.3*pow(x,3), 0.5));
}
double u1(double x)
{
	return sin(pow(1 - 0.3 * pow(x, 3), 0.5)) * 0.9*pow(x,2);
}

int main()
{
	setlocale(LC_ALL, "ru");
	double a = 0;
	double b = 1;
	double x = (a + b) / 2;
	double e = 0.000001;
	if (fabs(u1(x)) < 1)
	{
		while (fabs(x - a) > e)
		{
				a = x;
				x = u(x);
		}
		cout << "Корень уравнения = " << x << endl;
	}
	else
		cout << "Данная функция не подходит для решения этим методом" << endl;
	return 0;
	
}