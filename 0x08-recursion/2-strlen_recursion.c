#include "main.h"

/**
 * _strlen_recursion - function
 * Description: counts the size of string
 * @s: a pointer to the string value address
 * Return: count of string characters
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
