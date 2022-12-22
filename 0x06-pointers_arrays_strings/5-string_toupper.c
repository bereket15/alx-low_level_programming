#include "main.h"

/**
 * string_toupper - function
 * Description: Convert lowercase to uppercase
 * @s: String value to be uppercase
 * Return: changed string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
			i++;
	}
	return (s);
}
