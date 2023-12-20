#include<iostream>
#include<math.h>
using namespace std;

double f(double x)
{
	return acos(x) - sqrt(1 - 0.3 * pow(x, 3));
}
int main()
{
	double a, b, x, e;
	a = 0;
	b = 1;
	e = 0.000001;
	while (abs(a - b) > e)
	{
		x = (a + b) / 2;
		if (f(b) * f(x) < 0)
			a = x;
		else
			b = x;
	}
	cout << x << endl;
}