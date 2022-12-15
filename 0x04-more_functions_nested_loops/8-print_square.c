#include "main.h"

/**
 * print_square - function
 * Description: Print group of  line n times
 * @n: Number of redundency to make the square symbol
 * Return: Nothing to return
 */
void print_square(int n)
{
	int i, j;

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
		if (n <= 0)
			_putchar('\n');
}
