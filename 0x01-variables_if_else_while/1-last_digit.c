#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: 0 Always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	if (n > 5)
		printf("Last digit of %d is and is greater than 5\n", n);
	else if (n == 0)
		printf("last digit of %d is and is 0\n", n);
	else
		printf("the last digit of %d is and is less than 6 and not 0\n", n);
	return (0);
}
