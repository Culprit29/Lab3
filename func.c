#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "func.h"


float func(int i)
{
	return pow(-1, i)*(i+ 1) / (pow(i, 2) +2*i+ 1);
}
