#include <math.h>
#include <stdio.h>
#include "func.h"



//Задание 1
double summ(int n)
{
	double a;
	int i = 0;
	a = 0;
	while (i <= n - 1)
	{
		a = a+func(i);
		++i;
	}
	return a;
}

