#include <stdio.h>

/**
 * main - check the code
 * Description: A program that print group of  numbers from 1 to 100
 * with replacing the word Fizz for group of multiples of 3, Buzz for
 * multiples of 5 and FizzBuzz for multiples of both
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else
			if ((i % 3) == 0)
				printf("Fizz");
			else
				if ((i % 5) == 0)
					printf("Buzz");
				else
					printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
