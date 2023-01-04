#include "main.h"

int _palindrome(char *s, char *tmp, int n);

/**
 * is_palindrome - function
 * Description: checks if a string is palindrome
 * @s: a pointer to the string value
 * Return: 1 if string is palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int x;
	char *tmp = s;

	if (!(*s))
		return (1);
	x = _strlen_recursion(s);
	if (_palindrome(s, tmp, x) == x)
		return (1);
	else
		return (0);
}

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

/**
 * _palindrome - function
 * Desription: Checks if a string is palindrome or not
 * @s: a pointer to the string value
 * @tmp: to hold the initial starting address of the string
 * @n: checker number
 * Return: return the sum of the strings which match
 */
int _palindrome(char *s, char *tmp, int n)
{
	if (n <= 0)
		return (0);
	if (*s == *(tmp + n - 1))
		return (_palindrome(s + 1, tmp, n - 1) + 1);
	else
		return (_palindrome(s + 1, tmp, n - 1) + 0);
}
