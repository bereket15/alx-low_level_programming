#include "main.h"
/**
 * _puts - function
 * Descrption: prints string follwed by new line
 * @str: variabel to print the string
 * Return: noting to return
 */
void _puts(char *str)
{
	char c;

	c = 0;
	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
		c++;
	}
	_putchar('\n');
}
