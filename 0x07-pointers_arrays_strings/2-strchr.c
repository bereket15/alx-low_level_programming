#include "main .h"

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

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
