#include <stdio.h>
#include <math.h>
void f();
double x = 1, result;

void main()
{
	f();
	printf("x = %.4f\n", x);
	printf("result = %.4f\n", result);
	system("pause");
	return 0;
}
void f()
{
	result = (sin(4 * x) / (1 + cos(4 * x))*(cos(2 * x) / (1 + cos(2 * x))));
}