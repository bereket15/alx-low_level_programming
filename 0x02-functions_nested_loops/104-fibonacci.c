#include <stdio.h>

/**
 * main - function
 * Description: Print the first 98 fevonacci numbers
 * Return: 0 - success
 */
int main(void)
{
	int i;
	long int f1 = 0, f2 = 1, sum;

	for (i = 0 ; i < 98 ; i++)
	{
		sum = f1 + f2;
		printf("%li", sum);
		f1 = f2;
		f2 = sum;
		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
