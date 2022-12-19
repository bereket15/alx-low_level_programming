#include "main.h"

/**
 * puts2 - function
 * Description: Print string starting from the first character
 * jumping the next character
 * @str: pointer points to the string value
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
