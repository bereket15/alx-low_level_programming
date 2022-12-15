#include "main.h"

/**
 * print_numbers - function
 * Description: Print numbers 0 - 9
 * Return: the multiple
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		_putchar(i + '0');
	_putchar('\n');
}
