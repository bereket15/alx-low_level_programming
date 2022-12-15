#include "main.h"

/**
 * print_triangle - function
 * Description: A program to print * trangle n times
 * @n: number of width for the triangle
 * Return: Always 0
 */

void print_triangle(int n)
{
	int i, j, count;

	count = n;
	for (i = 1 ; i <= n ; i++)
	{
		for (j = 1 ; j <= n ; j++)
		{
			if (j >= count)
				_putchar('#');
			else
				_putchar(' ');
		}
		count--;
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
