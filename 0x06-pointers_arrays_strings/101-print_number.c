#include "main.h"

/**
 * print_number - function
 * Description: Prints an integer
 * @n: Passed integer
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -(num);
	}
	if ((num / 10) > 0)
		print_number(num / 10);
		_putchar((num % 10) + '0');
}
