#include "main.h"

/**
 * _puts_recursion - function
 * Description: Prints a string recurssively
 * @s: a pointer to the string value address
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
