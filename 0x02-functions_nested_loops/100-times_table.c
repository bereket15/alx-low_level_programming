#include "main.h"
/**
 * print_times_table - function
 * Description: Print the n time matrix table up to 15
 * @n: Times table number
 * Return: 0 success
 */
void print_times_table(int n)
{
	int i, j, mul;

	if (n <= 15 && n >= 0)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				mul = i * j;
				if (j != 0)
				{
					if (mul <= 999)
						_putchar(' ');
					if (mul <= 99)
						_putchar(' ');
					if (mul <= 9)
						_putchar(' ');
				}
				if (mul >= 100)
				{
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10) % 10) + '0');
				}
				else
					if (mul > 9 && mul < 100)
						_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
