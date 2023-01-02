#include "main.h"
#include <stddef.h>

/**
 * _strchr - function
 * Description: searches a character in a string
 * @s: The address to the value of string
 * @c: Character to search for
 * Return: the address of the first offurence of searched character
 */
char *_strchr(char *s, char c)
{
	int i;
	char *loc = NULL;

	i = 0;
	while (s[i] >= '\0')
	{
		if (*(s + i) == c)
		{
			loc = &(*(s + i));
			break;
		}
		i++;
	}
	return (loc);
}
