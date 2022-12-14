#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void postive_or_negative(int i)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive \n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n <0)
	{
		printf("%d is negtive\n", n);
	}
	return (0);
}
