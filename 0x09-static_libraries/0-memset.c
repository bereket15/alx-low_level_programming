#include "main.h"

/**
 * _memset - function
 * Description: replaces n number of characters with specific character
 * @s: string pointer pointes to the passed string
 * @b: the character to replace by
 * @n: number of characters to replace
 * Return: the starting address of the string variable
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
