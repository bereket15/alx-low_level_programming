#include "main.h"

/**
 * _puts - function
 * Description: Print string
 * @str: pointer points to the string value
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
