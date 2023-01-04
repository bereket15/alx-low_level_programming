#include "main.h"

/**
 * _strlen_recursion - function
 * Description: Prints a string length of  recurssively
 * @s: a pointer to the string value address
 * Return: count of a string
 */
int _strlen_recursion(char *s);
{
	if (*s == '\0')
		return (0);
	s++
	return (1 + _strlen_recursion(s));
}
