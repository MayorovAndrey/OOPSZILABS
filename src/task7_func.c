#include <math.h>
#include "func.h"

double x = 1, y;

void f()
{
	y = (sin(4 * x) / (1 + cos(4 * x))*(cos(2 * x) / (1 + cos(2 * x))));
}