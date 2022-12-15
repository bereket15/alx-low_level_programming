#include "main.h"

/**
 * print_line - function
 * Description: Print group of line n times
 * @n: Number of redundency to make the line
 * Return: Nothing to return
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		_putchar('_');
	_putchar('\n');
}
