#include "main.h"
/**
 * print_sign - Function
 * Description: Checks whether a character is postive , zero or negitive
 *  @n: is the passed value of the character to check
 *  Return: 1,0,-1 according to n value
 */
int print_sign(int n)
{
	int nn = n;

	if (nn > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (nn == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return ('-1');
	}
}
