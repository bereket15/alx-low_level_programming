#include "main.h"

/**
 * _print_rev_recursion - function
 * Description: Prints a string in reverse recurssively
 * @s: a pointer to the string value address
 * Return: nothing
 */
int _strlen_recursion(char *s);
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
