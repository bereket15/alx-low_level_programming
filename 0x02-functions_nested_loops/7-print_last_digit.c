#include "main.h"
/**
 * print_last_digit - Function
 * Discription: print last digir of a number
 * @r: data type of the number to be printed
 * Return: laste digit
 */
int print_last_digit(int r)
{
	int n = r;
	int l;

	if (n < 0)
		l = (n % 10) * -1;
	else
		l = n % 10;
	_putchar(l + '0');
	return (l);
}
