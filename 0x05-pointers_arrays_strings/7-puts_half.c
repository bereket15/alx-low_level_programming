#include "main.h"

/**
 * puts_half - function
 * Description: Print the second half of a string
 * @str: pointer points to the string value
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, half;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	half = i / 2;
	i -= half;
	while (half--)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
