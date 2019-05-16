#include <stdio.h>
#include <math.h>
int main()
{
	double x = 1;
	double y = (sin(4 * x) / (1 + cos(4 * x))*(cos(2 * x) / (1 + cos(2 * x))));
	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	printf("Vvedite x:\n");

	scanf("%lf", &x);
	y = (sin(4 * x) / (1 + cos(4 * x))*(cos(2 * x) / (1 + cos(2 * x))));
	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	system("pause");
	return 0;
}
