#include "main .h"
#include <stddef.h>

/**
 * _strchr - function
 * Description: search a character in a string
 * @s: The address to the value of string
 * @c: Character to search for
 * Return: the addres of the first occernc of search character
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
			exit (0);
		}
		i++;
	}
	return (loc);
}
