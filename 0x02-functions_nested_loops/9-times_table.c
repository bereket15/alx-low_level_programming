#include "main.h"
/**
 * times_table - function
 * Description: Print the 9 time matrix table
 * Return: 0 success
 */
void times_table(void)
{
	int i, j, mul;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			mul = i * j;
			if ((mul / 10) == 0)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mul + '0');
				if (j != 9)
					_putchar(',');
			}
			else
			{
				if (j != 0)
					_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
				if (j != 9)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}
