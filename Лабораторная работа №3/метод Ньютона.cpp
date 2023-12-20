#include<iostream>
#include<math.h>
using namespace std;
double f(double x)
{
	return acos(x) - sqrt(1 - 0.3 * pow(x, 3));
}
double f1(double x)
{
	return 0.9 * pow(x, 2) / 2 * pow((1 - 0.3 * pow(x, 3)), 0.5) - 1 / pow((1 - pow(x, 2)), 0.5);
}
double f2(double x)
{
	return (1.8 * x * 2 * pow((1 - 0.3 * pow(x, 3)), 0.5) - 0.9 * pow(x, 2) 
		/ pow((1 - 0.3 * pow(x, 3)), 0.5)) / (4 - 1.2 * pow(x, 3)) 
		- 2 * x / (1 - pow(x, 2));
}



int main()
{
	double a, b, x, e;
	a = 0;
	b = 0.9;
	e = 0.000001; // заданная точность
	if (f(a) * f2(a) > 0)
		x = a;
	else
	{
		if (f(b) * f2(b) > 0)
			x = b;
		else
		{
			x = -10E10;
		}
	}
	if (x > -10E10)
	{
		while (fabs(f(x)) > e)
		{
			x = x - f(x) / f1(x);
		}
	}
		cout << x << endl;
}

