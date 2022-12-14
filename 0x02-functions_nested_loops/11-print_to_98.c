#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function
 * Description: Print natural numer to 99
 * @n: Natural number
 * Return: Always o
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else
		if (n > 98)
		{
			for (i = n ; i >= 98 ; i--)
			{
				printf("%d", i);
				if (i != 98)
					printf(", ");
			}
			printf("\n");
		}
		else
			printf("%d\n", n);
}
