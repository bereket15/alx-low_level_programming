#include "main.h"

/**
 * *_memset - function
 * Description: replace n number of characters with specfic character
 * @s: is a string
 * @b: is a charcter
 * @n: is an integer
 * Return: astring
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
