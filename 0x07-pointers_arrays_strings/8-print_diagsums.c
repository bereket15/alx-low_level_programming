#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function
 * Description: Print sum of diagonals in square matrix
 * @a: the address of the square matrix
 * @size: the size of matrix to be summed
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		s1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0 ; i < size ; i++)
	{
		s2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", s1, s2);
}
