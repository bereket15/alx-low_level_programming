#include "main.h"
/**
 * _strspn - function
 * Description: counts characters which match the given string characters
 * @s: the given string
 * @accept: Character to compare
 * Return: number of characters which match the second string characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count;

	count = 0;
	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
		if (*s == accept[i])
		{
			count++;
			break;
		}
		else
			if (accept[i + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
