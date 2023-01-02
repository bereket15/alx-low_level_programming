#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function
 * Description: searches a character in a string from given set
 * @s: The address to the value of string
 * @accept: Characters to search for
 * Return: the address of the first offurence of searched character
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *loc = NULL;

	while (*s)
	{
		for (i = 0 ; accept[i] && accept[i] > '\0' ; i++)
		{
			if (*s == *(accept + i))
				return (s);
		}
		s++;
	}
	return (loc);
}
