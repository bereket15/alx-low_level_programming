#include "main.h"
#include <stdio.h>

/**
 * print_array - function
 * Description: Print the value of the given  array
 * @a: pointer points to the given array
 * @n: Number of array index values to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
