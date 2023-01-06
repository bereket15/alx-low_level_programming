#include "main.h"
#include <stddef.h>

/**
 * _strstr - function
 * Description: searches for a substring in a string
 * @heystack: the given string
 * @needle: substring to search for
 * Return: address of the first offurance of substring in the string
 */
char *_strstr(char *heystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (heystack);
	while (*heystack)
	{
		i = 0;
		if (heystack[i] == needle[i])
		{
			for (i = 0 ; heystack[i] == needle[i] ; i++)
			{
			if (needle[i + 1] == '\0')
				return (heystack);
			}
		}
		heystack++;
	}
	return (NULL);
}
